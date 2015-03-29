open Closure

let main_return r =
  Printf.sprintf "int %s = 1;\nreturn %s;\n" r r

let translate_print s = match s with
  | "min_caml_print_int" -> "printf(\"%d\", "
  | "min_caml_print_float" -> "printf(\"%s\", "

let print_results id l = 
  let s = translate_print id in
  List.fold_left (fun acc s -> acc ^ " " ^ s) "" l
  |> Printf.sprintf "%s%s);\n" s

let rec string_of_type t = match t with
  | Type.Unit -> "void"
  | Type.Int -> "int"
  | Type.Bool -> "bool"
  | Type.Float -> "double"
  | Type.Fun(l, r) -> (string_of_type r)
  | _ -> ""

let create_tuple xts y =
  List.mapi (fun i l ->
    begin
      let (n, t) = l in
      Printf.sprintf "%s %s = %s[%d];\n" (string_of_type t) n y i
    end
  ) xts
  |> List.fold_left (fun acc s -> acc ^ "" ^ s) ""

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
	Printf.sprintf "%s %s = %s;" (string_of_type t) r x
      with Not_found -> print_endline x; assert false
    end
  | Let((x, t), e1, e2) -> Printf.sprintf "%s\n%s" (trans_exp x tp e1) (trans_exp r ((x, t) :: tp) e2) 
  | Tuple(xs) -> Printf.sprintf "int %s[] = {%s};" r (List.fold_left (fun acc s -> match acc with | "" -> s | _ -> acc ^ ", " ^ s) "" xs)
  | LetTuple(xts, y, e) -> Printf.sprintf "%s%s" (create_tuple xts y) (trans_exp r tp e)

let make_header () =
  Printf.sprintf "#include<stdio.h>\n#include<stdlib.h>\n#include\"csyntax.h\"\n\n"

let make_main () =
  Printf.sprintf "int main(){\n"

let end_function r =
  Printf.sprintf "\nreturn %s;\n}\n" r

let rec make_function(f : fundef list) = 
  match f with
  | [] -> ""
  | _ -> 
    begin
      let elem = List.hd f in 
      let (Id.L l, t) = elem.name in
      let a = elem.args in
      let b = elem.body in
      Printf.sprintf "%s %s(%s){\n%s%s\n\n%s" (string_of_type t) l 
	(List.fold_left(fun acc (s, typ) -> match acc with 
	| "" -> acc ^ (string_of_type typ) ^ " " ^ s 
	| _ -> acc ^ ", " ^ (string_of_type typ) ^ " " ^ s) "" a) 
	(trans_exp "result" [] b) (end_function "result") (make_function (List.tl f))  
    end

let main s =
  let (prog, x) = Lexing.from_string s
  |> Parser.exp Lexer.token
  |> Typing.f 
  |> KNormal.f
  |> Assoc.f
  |> Inline.f
  |> Elim.f
  |> Closure.f
  |> (fun (Prog (p, t)) -> (p, t)) in(*Deal with Prog and Fundef*)
  make_header() ^ (make_function prog) ^ make_main() ^ (trans_exp "result" [] x) ^ end_function "result" |> print_endline;;

