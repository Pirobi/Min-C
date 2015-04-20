let rec make_adder x =
  let rec adder y = x + y in
  adder in

let rec make_adder2 x y =
  let rec adder2 z = x + y + z in
  adder2 in

let rec test n = 
  if n = 0 then ((make_adder 3) 7)
  else 
    ((make_adder2 3 4) 7) in
print_int (test 0)
