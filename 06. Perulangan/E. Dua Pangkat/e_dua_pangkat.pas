program e_dua_pangkat;
var
  N : longint;
begin
  readln(N);
  while (N mod 2 = 0) do
    N := N div 2;
  if (N = 1) then
    writeln('ya')
  else
    writeln('bukan')
end.
