program b_for;
uses crt;
var 
  N, i : integer;
  B, res : longint;
begin
  readln(N);
  res := 0;
  for i := 1 to N do
    begin
      read(B);
      res := res + B;
    end;
  writeln(res);
end.
