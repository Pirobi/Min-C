
let u = print_int 12 in
let rec sum x =
  if x <= 0 then 0 else
  sum (x - 1) + x in
let f = if sum 10 <= 0 then sum else sum in
let _ = print_int (f 10000) in
let _ = print_int 100 in
()
