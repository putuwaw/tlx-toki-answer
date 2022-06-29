program d_while_pencacah;
var 
  num : integer;
  res : longint;
begin
  res := 0;
  while not eof(input) do begin
    readln(num);
    res := res + num;
  end;
  writeln(res);
end.
