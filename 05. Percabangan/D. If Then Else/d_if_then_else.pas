program d_if_then_else;
uses crt;
var N : longint;
begin
  readln(N);
  if (N > 0) then
    writeln('positif')
  else if (N < 0) then
    writeln('negatif')
  else
    writeln('nol');
end.
