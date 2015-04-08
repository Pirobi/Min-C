open Closure


let make_header () =
  Printf.sprintf "#include<stdio.h>\n#include<stdlib.h>\n#include\"csyntax.h\"\n\n"

let rec string_of_type t = match t with
  | Type.Unit -> "void"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> 
    (match r with
    | Type.Fun(l', r') -> "Closure"
    | Type.Unit -> "Closure"
    | _ -> (string_of_type r))
  | Type.Array(t) ->
    (match t with
    | Type.Array(t') -> (string_of_type t')
    | _ -> (string_of_type t))
  | _ -> ""

let type_of_string s = match s.[1] with
  | 'i' -> "int"
  | 'd' -> "double"
  | 'b' -> "bool"
  | 'f' -> "Environment"

let list_args fv =
  match fv with
  | [] -> ""
  | _ ->
    List.mapi (fun i l ->  
      begin
	let (n, t) = l in
	Printf.sprintf "%s %s = *(env + %d);\n" (string_of_type t) n i
      end) fv |> List.fold_left (fun acc s -> acc ^ "" ^ s) ""

let list_params l =
  List.fold_left (fun acc s -> 
    match acc with 
    | "" -> s 
    | _ -> acc ^ ", " ^ s) "" l

let malloc_check =
  Printf.sprintf "if(env == NULL){\nprintf(\"Error allocating memory for environment\\n\");\nexit(-1);\n}\n"

let print_results id l r =
  match id with
    | "min_caml_print_int" -> let params = list_params l in Printf.sprintf "printf(\"%%d\", %s);" params
    | "min_caml_print_float" -> let params = list_params l in Printf.sprintf "printf(\"%%s\", %s);" params
    | "min_caml_create_float_array" -> Printf.sprintf "double %s[%s] = {%s};" r (List.nth l 0) (List.nth l 1)
    | "min_caml_create_array" -> Printf.sprintf "int %s[%s] = {%s};" r (List.nth l 0) (List.nth l 1)
    | _ -> let params = list_params l in Printf.sprintf "Closure %s = %s(%s);" r id params

let make_main () =
  Printf.sprintf "int main(){\n"

let end_function r is_main =
  match is_main with
  | true -> Printf.sprintf "\nint %s = 1;\nreturn %s;\n}\n" r r
  | false -> Printf.sprintf "\nreturn %s;\n}" r

let rec make_typedefs(f : fundef list) (g : (string * string) list) (h : string list) = 
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
      let types = (string_of_type t) ^ ", " ^ (List.fold_left(fun acc (s, typ) -> match acc with
										 | "" -> (string_of_type typ)
										 | _ -> acc ^ ", " ^ (string_of_type typ)) "" a) in
      let name =  l ^ "_type" in
      let typedef = name ^ signature in
      let (g', h') = 
	if fv <> [] then
	  ((name, types) :: g, typedef::h)
	else
	  (g, h) in 
      (make_typedefs (List.tl f) g' h')
    end 

let create_tuple xts y =
  List.mapi (fun i l ->
    begin
      let (n, t) = l in
      Printf.sprintf "%s %s = %s[%d];\n" (string_of_type t) n y i
    end
  ) xts
  |> List.fold_left (fun acc s -> acc ^ "" ^ s) ""

let rec trans_exp r (tp : (string * Type.t) list) (typedefs : (string * string) list) = function
  | Unit -> Printf.sprintf "" 
  | Int(i) -> Printf.sprintf "int %s = %d;" r i
  | Float(d) -> Printf.sprintf "double %s = %f;" r d
  | Neg(n) -> Printf.sprintf "int %s = -%s;" r n
  | Add(x, y) -> Printf.sprintf "int %s = %s + %s;" r x y
  | Sub(x, y) -> Printf.sprintf "int %s = %s - %s;" r x y
  | FAdd(x, y) -> Printf.sprintf "double %s = %s + %s;" r x y
  | FSub(x, y) -> Printf.sprintf "double %s = %s - %s;" r x y
  | FMul(x, y) -> Printf.sprintf "double %s =  %s * %s;" r x y
  | FDiv(x, y) -> Printf.sprintf "double %s = %s / %s;" r x y
  | FNeg(n) -> Printf.sprintf "double %s = -%s;" r n
  | IfEq(x, y, e1, e2) -> Printf.sprintf "if(%s == %s){\n%s\n}\nelse{\n%s\n}" x y (trans_exp r tp typedefs e1) (trans_exp r tp typedefs e2)
  | IfLE(x, y, e1, e2) -> Printf.sprintf "if(%s <= %s){\n%s\n}\nelse{\n%s\n}" x y (trans_exp r tp typedefs e1) (trans_exp r tp typedefs e2)
  | AppDir(Id.L l, xs) -> Printf.sprintf "%s" (print_results l xs r)
  | Var(x) -> 
    begin
      try
	let (n, t) = List.find (fun (name, typ) -> name = x) tp in 
	Printf.sprintf "%s %s = %s;" (string_of_type t) r x
      with Not_found -> print_endline x; assert false
    end
  | Let((x, t), e1, e2) -> Printf.sprintf "%s\n%s" (trans_exp x ((x,t)::tp) typedefs e1) (trans_exp r tp typedefs e2) 
  | Tuple(xs) -> Printf.sprintf "int %s[] = {%s};" r (list_params xs)
  | LetTuple(xts, y, e) -> Printf.sprintf "%s%s" (create_tuple xts y) (trans_exp r tp typedefs e)
  | MakeCls((x, t), { entry = Id.L l; actual_fv = ys }, e) ->
     Printf.sprintf "Environment env = malloc(%d * sizeof(int));\n%s%sClosure %s = { (Function)%s, env };" (List.length ys) malloc_check 
    (List.mapi (fun i n -> Printf.sprintf "*(env + %d) = %s;\n" i n) ys 
     |> List.fold_left (fun acc s -> acc ^ "" ^ s) "") r l
  | AppCls(x, ys) -> 
    begin
      try
	let (n, t) = List.find (fun (name, typ) -> name = r) tp in 
	let types = (type_of_string x) ^ ", " ^ (list_params ys) in
	let (typedef_name, typedef_type) = List.find (fun (name, typ) -> typ = types) typedefs in 
        Printf.sprintf "%s %s = ((%s)%s.f)(%s, %s.env);" (string_of_type t) r typedef_name x (list_params ys) x
      with Not_found -> print_endline r; assert false
    end
  | Get(x, y) -> 
    begin 
      try
      let (n, t) = List.find (fun (name, typ) -> name = r) tp in
      Printf.sprintf "%s %s = %s[%s];" (string_of_type t) r y x
      with Not_found -> print_endline x; assert false
    end
  | Put(x, y, z) -> Printf.sprintf "%s[%s] = %s;" x y z
  | ExtArray(_) -> ""

let rec make_functions(f : fundef list) (typedefs : (string * string) list) = 
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
      let name = Printf.sprintf "%s %s" (string_of_type t) l in
      let signature = Printf.sprintf "(%s%s)"  
	(List.fold_left(fun acc (s, typ) -> match acc with 
	| "" -> acc ^ (string_of_type typ) ^ " " ^ s 
	| _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ s) "" a) 
	environment in
      let func_end =
	match t with
	| Type.Unit -> ""
	| _ -> (end_function "result" false) in
      Printf.sprintf "%s%s{\n%s%s%s\n\n%s" name signature (list_args fv) (trans_exp "result" [("result", t)] typedefs b) func_end (make_functions (List.tl f) typedefs)  
    end

let main s =
  let (funcs, mainf) = Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f 
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f
  |> (fun (Prog (p, t)) -> (p, t)) in(*Deal with Prog and Fundef*)
  let (names, typedefs) = make_typedefs funcs [] [] in
  make_header() ^ (List.fold_right(fun acc s -> "typedef " ^ acc ^ ";\n" ^ s) typedefs "") ^ "\n" ^ (make_functions funcs names) ^ make_main() ^ (trans_exp "result" [] names mainf) ^ (end_function "ans" true) |> print_endline;;

