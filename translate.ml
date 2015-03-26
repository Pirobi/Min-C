open Closure

let main_return r =
  Printf.sprintf "int %s = 1;\nreturn %s;\n" r r

let translate_print s = match s with
  | "min_caml_print_int" -> ("printf", "%d")
  | "min_caml_print_float" -> ("printf", "%d")

let print_results id l = 
  let (func, s) = translate_print id in
  List.fold_left (fun acc s -> acc ^ " " ^ s) "" l
  |> Printf.sprintf "%s(\"%s\",%s);\n" func s

let type_To_String t = match t with
  | Type.Unit -> "void"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | _ -> ""

let rec trans_exp r (tp : (string * Type.t) list) = function
  | Unit -> Printf.sprintf "%s;" r
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
  | IfEq(x, y, e1, e2) -> Printf.sprintf "if(%s == %s){\n%s\n}\nelse{%s\n}" x y (trans_exp r tp e1) (trans_exp r tp e2)
  | IfLE(x, y, e1, e2) -> Printf.sprintf "if(%s <= %s){\n%s\n}\nelse{%s\n}" x y (trans_exp r tp e1) (trans_exp r tp e2)
  | AppDir(Id.L l, xs) -> Printf.sprintf "%s%s" (print_results l xs) (main_return r)
  | Var(x) -> 
    begin
      try
	let (n, t) = List.find (fun (name, typ) -> name = x) tp in 
	Printf.sprintf "%s %s = %s;" (type_To_String t) r x
      with Not_found -> print_endline x; assert false
    end
  | Let((x, t), e1, e2) -> Printf.sprintf "%s\n%s" (trans_exp x tp e1) (trans_exp r ((x, t) :: tp) e2)

let make_header () =
  Printf.sprintf "#include<stdio.h>\n#include<stdlib.h>\n//#include\"syntax.h\"\n\n"

let make_main () =
  Printf.sprintf "int main(){\n"

let end_function() =
  Printf.sprintf "}\n"

let main s =
  let x = Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f 
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f
  |> (fun (Prog (_, t)) -> t)(*Deal with Prog and Fundef*)
  |> trans_exp "result" [] in
  make_header() ^ make_main() ^ x ^ end_function() |> print_endline;;

