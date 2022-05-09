program c_if_then_multi;
uses crt;
var 
  N : longint;
begin
readln(N);
  if (N > 0) and (N mod 2 = 0) then
    writeln(N);
end.
