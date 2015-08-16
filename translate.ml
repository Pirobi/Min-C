(****************************************************************)
(*                                                              *)
(* Translation program from (Mini) Objective Caml to C          *)
(*                                                              *)
(* Min-Caml compiler originally by E. Sumii                     *)
(* Translator and C implementation design by K. Garrone         *)
(*                                                              *)
(****************************************************************)

open Closure
open Printf

(*Create the header of the output *.c file*)
let header = "#include\"csyntax.c\"\n\n"

(*Removes any decimals from variable names*)
let alpha_convert r =
  let r' =
    if String.contains r '.' then begin
      let index = String.index r '.' in
      let index1 = index + 1 in
      let len = String.length r in
      (String.sub r 0 index) ^ (String.sub r index1 (len - index1))
    end
    else r in
  sprintf "%s" r'

(*Convert a Type.t type to a string*)
(*Used for variables*)
let rec string_of_type t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> "Closure*"
  | Type.Array(t') -> "Value*"
  | Type.Tuple(xs) -> "Value*"
  | _ -> assert false

(*Used to get the value from a Value union*)
let rec type_for_union t = match t with
  | Type.Unit -> "i"
  | Type.Int -> "i"
  | Type.Bool -> "b"
  | Type.Float -> "d"
  | Type.Fun(l, r) -> "c"
  | Type.Array(t') -> "a"
  | Type.Tuple(xs) -> "a"
  | _ -> assert false

(*Used to determine what array-generation function to use*)
let type_for_array t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> "closure"
  | Type.Array(t') -> "multi"
  | Type.Tuple(xs) -> "multi"
  | _ -> assert false

(*Used for the name of the typedefs*)
let rec typedef_of_type t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> "Closure"
  | Type.Array(t) -> "array"
  | Type.Tuple(xs) -> "tuple"
  | _ -> assert false

(*Used for the name of typedefs from the function level*)
let rec typedef_for_funcs t = match t with
  | Type.Fun(l, r) -> typedef_of_type r
  | _ -> assert false

(*Used for the return type of a function*)
let rec get_return_type t = match t with
  | Type.Fun(l, r) -> string_of_type r
  | _ -> assert false

let rec extern_return_type t = match t with
  | Type.Unit -> "void"
  | _ -> string_of_type t

(*Print all of the external variables used in the program*)
let generate_extenv r =
  M.iter (fun x t ->
      (match t with
       | Type.Fun _ -> ()
       | Type.Array _ | Type.Tuple _ -> r := !r ^ sprintf "extern Value %s[];\n" x
       | _ -> r := !r ^ sprintf "extern %s %s;\n" (string_of_type t) x)) !Typing.extenv

(*If the return variable has already been declared, omit the type*)
let include_type r rt =
  match r with
  | "result" | "ans" -> r
  | _ -> sprintf "%s %s" rt r

(*If a closure exists, assign each value in the Environment list to a variable*)
let set_environment fv =
  match fv with
  | [] -> ""
  | _::_ ->
    List.mapi (fun i (n, t) ->
        sprintf "%s %s = env[%d].%s;\n" (string_of_type t) (alpha_convert n) i (type_for_union t)
      ) fv
    |> String.concat ""

(*Print the C statements used to create a Closure*)
let make_closure r f env =
  let r' = alpha_convert r in
  let decl = sprintf "Closure* %s = closure_malloc();" r' in
  let assign =
    sprintf "%s -> fp = (Function)%s_fun;\n%s -> env = %s;"
      r' (alpha_convert f) r' env in
  sprintf "%s\n%s\n" decl assign

(*List the parameters for functions or lists*)
let list_params l =
  List.fold_left (fun acc s ->
      let s' = alpha_convert s in
      match acc with
      | "" -> s'
      | _ -> acc ^ ", " ^ s') "" l

(*Return the result of the function.*)
let end_function r =
  sprintf "\nreturn %s;\n}" (alpha_convert r)

(*Scan the fundefs and generate the typedefs used in the C program*)
let rec make_typedefs(f : fundef list) (g : string list) (h : string list) =
  match f with
  | [] -> (g, h)
  | _::_ -> begin
      let elem = List.hd f in
      let (Id.L l, t) = elem.name in
      let a = elem.args in
      let signature = sprintf "(%s, Value *env, Closure *%s)"
          (List.fold_left(fun acc (s, typ) -> match acc with
               | "" -> acc ^ (string_of_type typ) ^ " " ^ (alpha_convert s)
               | _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ (alpha_convert s)) "" a)
          (alpha_convert l) in
      let name = "fun_" ^ (typedef_for_funcs t) ^ "_" ^
                 (List.fold_left(fun acc (s, typ) -> match acc with
                      | "" -> (typedef_of_type typ)
                      | _ -> acc ^ "_" ^ (typedef_of_type typ)) "" a) ^ "_Value_Closure" in
      let typedef = (get_return_type t) ^ " " ^ name ^ signature in
      let (g', h') =
        if not (List.exists (fun n -> n = name) g) then
          (name :: g, typedef::h)
        else
          (g, h) in
      make_typedefs (List.tl f) g' h'
    end

(*Extract all values from a tuple*)
let create_tuple xts y =
  List.mapi (fun i (s, t) ->
      sprintf "%s %s = %s[%d].%s;\n"
        (string_of_type t) (alpha_convert s) (alpha_convert y) i (type_for_union t)
    ) xts
  |> String.concat ""

(*Set each value of the tuple to a spot in the array*)
let set_tuple r (t_env : (string * Type.t) list) xs =
  match xs with
  | [] -> ""
  | _::_ ->
    List.mapi(fun i l ->
        let(name, typ) = List.find (fun (n, t) -> n = l) t_env in
        sprintf "%s[%d].%s = %s;\n" (alpha_convert r) i (type_for_union typ) (alpha_convert l)) xs
    |> String.concat ""

(*This function will translate a single line of the OCaml intermediate code and decide the translated C version*)
let rec trans_exp r' typ (t_env : (string * Type.t) list) typedef_names env_name func_name exp =
  let r =  alpha_convert r' in
  match exp with
  | Unit -> sprintf "%s = 0;" r
  | Int(i) -> sprintf "%s = %d;" r i
  | Float(d) -> sprintf "%s = %.20f;" r d
  | Neg(n) -> sprintf "%s = -%s;" r (alpha_convert n)
  | Add(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s = %s + %s;" r x' y'
  | Sub(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s = %s - %s;" r x' y'
  | FNeg(n) ->
    let n' = alpha_convert n in
    sprintf "%s = -%s;" r n'
  | FAdd(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s = %s + %s;" r x' y'
  | FSub(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s = %s - %s;" r x' y'
  | FMul(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s =  %s * %s;" r x' y'
  | FDiv(x, y) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    sprintf "%s = %s / %s;" r x' y'
  | IfEq(x, y, e1, e2) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    let t1 = (trans_exp r typ t_env typedef_names env_name func_name e1) in
    let t2 = (trans_exp r typ t_env typedef_names env_name func_name e2) in
    sprintf "if(%s == %s){\n%s\n}\nelse{\n%s\n}" x' y' t1 t2
  | IfLE(x, y, e1, e2) ->
    let x' = alpha_convert x in
    let y' = alpha_convert y in
    let t1 = (trans_exp r typ t_env typedef_names env_name func_name e1) in
    let t2 = (trans_exp r typ t_env typedef_names env_name func_name e2) in
    sprintf "if(%s <= %s){\n%s\n}\nelse{\n%s\n}" x' y' t1 t2
  | Let((x, t), e1, e2) ->
    let x' = alpha_convert x in
    let t1 = (trans_exp x' t t_env typedef_names env_name func_name e1) in
    let t2 = (trans_exp r typ ((x, t) :: t_env) typedef_names env_name func_name e2) in
    let variable = sprintf "%s %s;\n" (string_of_type t) x' in
    sprintf "%s%s\n%s" variable t1 t2
  | Var(x) ->
    let x' = alpha_convert x in
    sprintf "%s = %s;" r x'
  | MakeCls((x, t), { entry = Id.L l; actual_fv = ys }, e) ->
    begin
      try
        let x' = alpha_convert x in
        let env_creation =
          let decl = sprintf "Value *%s_env = safe_malloc(%d);" x' (List.length ys) in
          let assign =
            List.mapi (fun i n ->
                let n' = alpha_convert n in
                let (name, typ) = List.find (fun (a, b) -> a = n) t_env in
                sprintf "%s_env[%d].%s = %s;\n" x' i (type_for_union typ) n') ys
            |> String.concat "" in
          sprintf "%s\n%s" decl assign in
        let clos_creation = make_closure x' l (x' ^ "_env") in
        let body = trans_exp r typ ((x, t) :: t_env) typedef_names (x' ^ "_") func_name e in
        sprintf "%s%s%s" env_creation clos_creation body
      with Not_found -> print_endline ("ys: " ^ (List.fold_left (fun acc s -> acc ^ ", " ^ s) "" ys));
        eprintf "t_env: %s" (List.fold_left (fun acc (x, y) -> acc ^ "," ^ x) "" t_env); assert false
    end
  | AppCls(x, ys) ->
    let x' = alpha_convert x in
    if x' = func_name then sprintf "%s = %s_fun(%s, env, %s);" r x' (list_params ys) x'
    else begin
      let typ_seq =
        List.fold_left (fun acc x ->
            let(name, typ) = List.find (fun (n, t) -> n = x) t_env in
            match acc with
            | "" -> acc ^ "" ^ (typedef_of_type typ)
            | _ -> acc ^ "_" ^ (typedef_of_type typ)) "" ys in
      let types = sprintf "fun_%s_%s_Value_Closure" (typedef_of_type typ) typ_seq in
      try
        let typedef_type = List.find (fun typ -> typ = types) typedef_names in
        sprintf "%s = ((%s*)%s -> fp)(%s, %s -> env, %s);" r typedef_type x' (list_params ys) x' x'
      with Not_found -> (List.iter(fun s -> print_endline s) typedef_names); print_endline types; print_endline (typedef_of_type typ); print_endline (string_of_type typ);
        print_endline (get_return_type typ); print_endline (list_params ys); assert false
    end
  | AppDir(Id.L l, xs) ->
    let params = list_params xs in
    (match l with
     | "min_caml_print_int" -> sprintf "printf(\"%%d\", %s);" params
     | "min_caml_print_byte" -> sprintf "putchar(%s);" params
     | "min_caml_print_float" -> sprintf "printf(\"%%lf\", %s);" params
     | "min_caml_create_float_array" | "min_caml_create_array" ->
       let (size, init) = ((List.nth xs 0), (List.nth xs 1)) in
       let(init_n, init_typ) = List.find (fun (n, t) -> n = init) t_env in
       let cls =
         if (string_of_type init_typ) = "Closure*" then make_closure init init "env"
         else "" in
       sprintf "%s%s = make_%s_array(%s, %s);" cls r (type_for_array init_typ) (alpha_convert size) (alpha_convert init_n)
     | "min_caml_print_newline" -> sprintf "printf(\"\\n\");"
     | "min_caml_print_endline" -> sprintf "printf(\"%%s\\n\", %s);" params
     | "min_caml_truncate"  | "min_caml_int_of_float" | "min_caml_float_of_int" ->
       sprintf "%s = (%s) %s;" r (string_of_type typ) params
     | "min_caml_cos" -> sprintf "%s = cos(%s);" r params
     | "min_caml_sin" -> sprintf "%s = sin(%s);" r params
     | "min_caml_atan" -> sprintf "%s = atan(%s);" r params
     | "min_caml_sqrt" -> sprintf "%s = sqrt(%s);" r params
     | "min_caml_floor" -> sprintf "%s = floor(%s);" r params
     | "min_caml_abs_float" -> sprintf "%s = fabs(%s);" r params
     | "min_caml_read_int" -> sprintf "%s = scanf(\"%%d\", &%s);" params r
     | "min_caml_read_float" -> sprintf "%s = scanf(\"%%lf\", &%s);" params r
     | "min_caml_prerr_int" | "min_caml_prerr_float" | "min_caml_prerr_byte" -> sprintf "fprintf(stderr, %s);" params
     | _ -> sprintf "%s = %s_fun(%s, NULL, NULL);" r (alpha_convert l) params)
  | Tuple(xs) -> sprintf "%s = safe_malloc(%d);\n%s" r (List.length xs) (set_tuple r t_env xs)
  | LetTuple(xts, y, e) ->
    let t = trans_exp r typ t_env typedef_names env_name func_name e in
    sprintf "%s%s" (create_tuple xts y) t
  | Get(x, y) -> sprintf "%s = %s[%s].%s;" r (alpha_convert x) (alpha_convert y) (type_for_union typ)
  | Put(x, y, z) ->
    let (name, typ) =
      List.find (fun (n, t) -> n = z) t_env in
    sprintf "%s[%s].%s = %s;" (alpha_convert x) (alpha_convert y) (type_for_union typ) (alpha_convert z)
  | ExtArray(Id.L s) -> sprintf "%s = %s;" r (alpha_convert s)


(*This function will go through all fundefs and translate each function into C*)
let rec make_functions(f : fundef list) (typedef_names : string list) =
  match f with
  | [] -> ""
  | _::_ ->
    begin
      let elem = List.hd f in
      let (Id.L l', (Type.Fun(_, rt) as t)) = elem.name in
      let l = (alpha_convert l') in
      let a = elem.args in
      let fv = elem.formal_fv in
      let b = elem.body in
      let return_typ = get_return_type t in
      let name = sprintf "%s %s_fun" return_typ l in
      let signature = sprintf "(%s, Value *env, Closure *%s)"
          (List.fold_left(fun acc (s, typ) ->
               let s' = alpha_convert s in
               match acc with
               | "" -> acc ^ (string_of_type typ) ^ " " ^ s'
               | _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ s') "" a)
          l in
      let func_end = end_function "result" in
      let t_env = (l', t) :: (List.append fv a) in
      sprintf "%s%s{\n%s result;\n%s%s%s\n\n%s" name signature return_typ (set_environment fv)
        (trans_exp "result" rt t_env typedef_names "" l b) func_end (make_functions (List.tl f) typedef_names)
    end

(*This function creates the C main function*)
let make_main r typedef_names body =
  let body' = trans_exp r Type.Int [] typedef_names "" "main" body in
  sprintf "int main(){\nint %s = 0;\n%s\nreturn %s;\n}\n" r  body' r

(*Generates the intermediate code for use in debugging the translation*)
let debug s =
  Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f

(*Compiles Min-Caml code through closure conversion, then translates the resulting intermediate code into C*)
let translate s =
  let Prog (funcs, mainf) =
    Lexing.from_string s
    |> Parser.exp Lexer.token
    |> Typing.f
    |> KNormal.f
    |> Alpha.f
    |> Assoc.f
    |> Inline.f
    |> Elim.f
    |> Closure.f in
  let (typedef_names, typedefs) = make_typedefs funcs [] [] in
  let r = ref "" in
  let () = generate_extenv r in
  eprintf "Translating intermediate code to C...@.";
  let typedefs' = List.fold_right(fun acc s -> "typedef " ^ acc ^ ";\n" ^ s) typedefs "" ^ "\n" in
  let funs = make_functions funcs typedef_names in
  let main = make_main "ans" typedef_names mainf in
  header ^ typedefs' ^ !r ^ "\n" ^ funs ^ main

(*Reads a file and translates the Min-Caml code*)
let main file =
  eprintf "Preparing file %s.ml for translation...@." file;
  let lines = ref "" in
  let in_channel = open_in (file ^ ".ml") in
  try
    while true do
      lines := sprintf "%s%s\n" !lines (input_line in_channel)
    done;
  with End_of_file ->
    close_in in_channel;
    let result = translate !lines in
    let out_channel = open_out (file ^ ".ml.c") in
    eprintf "Outputting to %s.ml.c...@." file;
    output_string out_channel result;
    close_out out_channel;
    eprintf "Translation complete.@."

(*Get the execution time of the translator*)
let time f x =
  let start = Sys.time () in
  let res = f x in
  let () = eprintf "Translation Time: %.2fs\n%!" (Sys.time () -. start) in
  res

let () =
  if Array.length Sys.argv = 1
  then begin printf "Usage: min-caml filename@."; exit 0 end
  else time main Sys.argv.(1)
