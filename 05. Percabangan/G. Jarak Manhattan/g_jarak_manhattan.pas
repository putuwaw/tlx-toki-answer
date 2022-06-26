program g_jarak_manhattan;
uses crt;
var 
  x1, y1, x2, y2: longint;
begin
  readln(x1, y1, x2, y2);
  x1 := x1 - x2;
  y1 := y1 - y2;
  if x1 < 0 then x1 := x1 * -1;
  if y1 < 0 then y1 := y1 * -1;
  writeln(x1 + y1);
end.
