program f_floor_dan_ceiling;
uses crt;
var
N : real;
begin
  readln(N);
  if (N >= 0) then begin
    if (N > trunc(N)) then
      writeln(trunc(N), ' ', trunc(N)+1)
    else
      writeln(trunc(N), ' ', trunc(N));
  end
  else begin
    if (N < trunc(N)) then
      writeln(trunc(N)-1, ' ', trunc(N))
    else
      writeln(trunc(N), ' ', trunc(N));
  end;
end.
