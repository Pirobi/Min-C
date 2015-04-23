open Closure

(*Create the header of the output *.c file*)
let make_header () =
  Printf.sprintf "#include<stdio.h>\n#include<stdlib.h>\n#include\"csyntax.c\"\n\n"

(*Convert a Type.t type to a string*)
(*Used for variables*)
let rec string_of_type t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> "Closure"
  | Type.Array(t) -> string_of_type t ^ "*"
  | _ -> ""

(*Used for typedefs*)
let rec typedef_of_type t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) ->
     (match r with
      | Type.Array(t) -> typedef_of_type t
      | _ -> string_of_type r)
  | Type.Array(t) -> "array"
  | _ -> ""

(*Used for the return type of a variable*)
let rec get_return_type t = match t with
  | Type.Unit -> "int"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> string_of_type r
  | Type.Array(t) -> get_return_type t ^ "*"
  | _ -> ""

(*Determine the type of the given string and return a string*)
let type_of_string s =
  if String.length s > 2 then
    match s.[1] with
    | 'i' -> "int"
    | 'd' -> "double"
    | 'b' -> "bool"
    | 'f' -> "Closure"
    | 't' -> "int"
    | 'u' -> "int"
    | 'a' -> "array"
    | _ -> "int"
  else "int"

let include_type r rt =
  match r with
  | "result" -> Printf.sprintf "%s" r
  | _ -> Printf.sprintf "%s %s" rt r

(*Assign each value in the Environment list to a variable*)
let list_args fv =
  match fv with
  | [] -> ""
  | _ ->
    List.mapi (fun i l ->
      begin
	let (n, t) = l in
	Printf.sprintf "%s %s = (%s) env[%d];\n" (string_of_type t) n (string_of_type t) i
      end) fv
    |> List.fold_left (fun acc s -> acc ^ "" ^ s) ""

(*List the parameters for functions or lists*)
let list_params l =
  List.fold_left (fun acc s ->
    match acc with
    | "" -> s
    | _ -> acc ^ ", " ^ s) "" l

(*Add the check for a created Environment malloc*)
let malloc_check n =
  Printf.sprintf "if(%s_env == NULL){\nprintf(\"Error allocating memory for environment\\n\");\nexit(-1);\n}\n" n

(*Translate min_caml functions into C*)
let print_results id l r rt =
  match id with
    | "min_caml_print_int" -> let params = list_params l in Printf.sprintf "printf(\"%%d\", %s);" params
    | "min_caml_print_float" -> let params = list_params l in Printf.sprintf "printf(\"%%s\", %s);" params
    | "min_caml_create_float_array" -> Printf.sprintf "double* %s = (double*) make_array(%s, (int)%s);" r (List.nth l 0) (List.nth l 1)
    | "min_caml_create_array" -> Printf.sprintf "int* %s = (int*) make_array(%s, %s);" r (List.nth l 0) (List.nth l 1)
    | "min_caml_print_newline" -> Printf.sprintf "printf(\"\\n\");"
    | "min_caml_truncate" -> let params = list_params l in Printf.sprintf "%s %s = (%s) %s;" (type_of_string r) r (type_of_string r) params
    | _ -> let params = list_params l in Printf.sprintf "%s %s = %s_fun(%s);" (string_of_type rt) r id params

(*Return the result of the function. This function MIGHT be restructured later*)
let end_function r =
  Printf.sprintf "\nreturn %s;\n}" r

(*Scan the fundefs and generate the typedefs used in C*)
let rec make_typedefs(f : fundef list) (g : string list) (h : string list) =
  match f with
  | [] -> (g, h)
  | _ ->
    begin
      let elem = List.hd f in
      let (Id.L l, t) = elem.name in
      let a = elem.args in
      let fv = elem.formal_fv in
      let environment = (match fv with
      | [] -> ""
      | _ -> ", Environment env") in
      let signature = Printf.sprintf "(%s%s)"
	(List.fold_left(fun acc (s, typ) -> match acc with
	| "" -> acc ^ (string_of_type typ) ^ " " ^ s
	| _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ s) "" a)
	environment in
      let name = "fun_" ^ (typedef_of_type t) ^ "_" ^
		   (List.fold_left(fun acc (s, typ) -> match acc with
						       | "" -> (typedef_of_type typ)
						       | _ -> acc ^ "_" ^ (typedef_of_type typ)) "" a)
		   ^ match environment with
		     | "" -> ""
		     | _ -> "_Environment" in
      let typedef = (get_return_type t) ^ " " ^ name ^ signature in
      let (g', h') =
	if not (List.exists (fun n -> n = name) g) then
	  (name :: g, typedef::h)
	else
	  (g, h) in
      (make_typedefs (List.tl f) g' h')
    end

(*Generate a C equivalent of an OCaml tuple*)
let create_tuple xts y =
  List.mapi (fun i l ->
    begin
      let (n, t) = l in
      Printf.sprintf "%s = %s[%d];\n" (include_type n (get_return_type t)) y i
    end
  ) xts
  |> List.fold_left (fun acc s -> acc ^ "" ^ s) ""

(*This function will translate a single line of the OCaml intermediate code and decide the translated C version
Change tp to rt -> directly pass the type of r*)
let rec trans_exp r (rt: Type.t) (typedef_names : string list) (env_name : string) (func_name : string) = function
  | Unit -> Printf.sprintf "%s = 1;" (include_type r (string_of_type rt))
  | Int(i) -> Printf.sprintf "%s = %d;" (include_type r "int") i
  | Float(d) -> Printf.sprintf "%s = %f;" (include_type r "double") d
  | Neg(n) -> Printf.sprintf "%s = -%s;" (include_type r "int") n
  | Add(x, y) -> Printf.sprintf "%s = %s + %s;" (include_type r "int") x y
  | Sub(x, y) -> Printf.sprintf "%s = %s - %s;" (include_type r "int") x y
  | FAdd(x, y) -> Printf.sprintf "%s = %s + %s;" (include_type r "double") x y
  | FSub(x, y) -> Printf.sprintf "%s = %s - %s;" (include_type r "double") x y
  | FMul(x, y) -> Printf.sprintf "%s =  %s * %s;" (include_type r "double") x y
  | FDiv(x, y) -> Printf.sprintf "%s = %s / %s;" (include_type r "double") x y
  | FNeg(n) -> Printf.sprintf "%s = -%s;" (include_type r "double") n
  | IfEq(x, y, e1, e2) ->
     let t1 = (trans_exp r rt typedef_names env_name func_name e1) in
     let t2 = (trans_exp r rt typedef_names env_name func_name e2) in
     Printf.sprintf "if(%s == %s){\n%s\n}\nelse{\n%s\n}" x y t1 t2
  | IfLE(x, y, e1, e2) ->
     let t1 = (trans_exp r rt typedef_names env_name func_name e1) in
     let t2 = (trans_exp r rt typedef_names env_name func_name e2) in
     Printf.sprintf "if(%s <= %s){\n%s\n}\nelse{\n%s\n}" x y t1 t2
  | AppDir(Id.L l, xs) -> Printf.sprintf "%s" (print_results l xs r rt)
  | Var(x) -> Printf.sprintf "%s = %s;" (include_type r (string_of_type rt)) x
  | Let((x, t), e1, e2) ->
     let t1 = (trans_exp x t typedef_names env_name func_name e1) in
     let t2 = (trans_exp r rt typedef_names env_name func_name e2) in
     Printf.sprintf "%s\n%s" t1 t2
  | Tuple(xs) -> Printf.sprintf "%s[] = {%s};" (include_type r "int") (list_params xs)
  | LetTuple(xts, y, e) ->
     let t = (trans_exp r rt typedef_names env_name func_name e) in
     Printf.sprintf "%s%s" (create_tuple xts y) t
  | MakeCls((x, t), { entry = Id.L l; actual_fv = ys }, e) ->
     let environment_creation = Printf.sprintf "Environment %s_env = malloc(%d * sizeof(void*));\n%s%s" x (List.length ys) (malloc_check x)
					       (List.mapi (fun i n -> Printf.sprintf "%s_env[%d] = %s;\n" x i n) ys
						|> List.fold_left (fun acc s -> acc ^ "" ^ s) "") in
     let closure_creation = Printf.sprintf"Closure %s = { (Function)%s_fun, %s_env };\n" x l x in
     Printf.sprintf "%s%s%s" environment_creation closure_creation (trans_exp r rt typedef_names (x ^ "_") func_name e)
  | AppCls(x, ys) ->
     if x = func_name then
       Printf.sprintf "%s = %s_fun(%s, env);" (include_type r (string_of_type rt)) x (list_params ys)
     else
       begin
	 let types = "fun_" ^ (typedef_of_type rt) ^ "_" ^ (List.fold_left (fun acc x ->
									      match acc with
									      | "" -> acc ^ "" ^ (type_of_string x)
									      | _ -> acc ^ "_" ^ (type_of_string x)) "" ys) ^ "_Environment" in
	   try
	     let typedef_type = List.find (fun typ -> typ = types) typedef_names in
	     Printf.sprintf "%s = ((%s*)%s.f)(%s, %s.env);" (include_type r (string_of_type rt)) typedef_type x (list_params ys) x
	   with Not_found -> print_endline types; print_endline (typedef_of_type rt); print_endline (string_of_type rt); print_endline (get_return_type rt); print_endline (list_params ys); assert false
       end
  | Get(x, y) -> Printf.sprintf "%s = %s[%s];" (include_type r (string_of_type rt)) x y
  | Put(x, y, z) ->  Printf.sprintf "%s[%s] = %s;" x y z
  | ExtArray(_) -> ""

(*This function will go through all fundefs and translate each function into C
Seperate function to find return type*)
let rec make_functions(f : fundef list) (typedef_names : string list) =
  match f with
  | [] -> ""
  | _ ->
    begin
      let elem = List.hd f in
      let (Id.L l, t) = elem.name in
      let a = elem.args in
      let fv = elem.formal_fv in
      let environment = (match fv with
      | [] -> ""
      | _ -> ", Environment env") in
      let b = elem.body in
      let name = Printf.sprintf "%s %s_fun" (get_return_type t) l in
      let signature = Printf.sprintf "(%s%s)"
	(List.fold_left(fun acc (s, typ) -> match acc with
	| "" -> acc ^ (string_of_type typ) ^ " " ^ s
	| _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ s) "" a)
	environment in
      let func_end = end_function "result" in
      Printf.sprintf "%s%s{\n%s result;\n%s%s%s\n\n%s" name signature (get_return_type t) (list_args fv) (trans_exp "result" t typedef_names "" l b) func_end (make_functions (List.tl f) typedef_names)
    end

(*This function creates the C main function*)
let make_main r typedef_names body =
  Printf.sprintf "int main(){\n%s\nint %s = 1;\nreturn %s;\n}\n" (trans_exp r Type.Int typedef_names "" "main" body) r r

let debug s =
  let (funcs, mainf) = Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f
  |> (fun (Prog (p, t)) -> (p, t)) in (funcs, mainf)

(*The main process of translate.ml*)
let translate s =
  let (funcs, mainf) = Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f
  |> (fun (Prog (p, t)) -> (p, t)) in(*Deal with Prog and Fundef*)
  let (typedef_names, typedefs) = make_typedefs funcs [] [] in
  make_header() ^ (List.fold_right(fun acc s -> "typedef " ^ acc ^ ";\n" ^ s) typedefs "") ^ "\n" ^ (make_functions funcs typedef_names) ^ (make_main "ans" typedef_names mainf)

let main file =
  Format.eprintf "Reading file test/%s.ml...@." file;
  let lines = ref "" in
  let in_channel = open_in file in
  try
    while true do
      lines := Printf.sprintf "%s%s\n" !lines (input_line in_channel)
    done;
  with End_of_file ->
    close_in in_channel;
    Format.eprintf "Translating intermediate code to C...@.";
    let result = translate !lines in
    let out_channel = open_out (file ^ ".c") in
    Format.eprintf "Outputting to translation/%s.c...@." file;
    output_string out_channel result;
    close_out out_channel;
    Format.eprintf "Translation complete.@."

let () =
  if Array.length Sys.argv = 1
  then begin Format.printf "Usage: min-caml filename@."; exit 0 end
  else main Sys.argv.(1)
