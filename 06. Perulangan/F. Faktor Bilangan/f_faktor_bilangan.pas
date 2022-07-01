program f_faktor_bilangan;
var
  N, i : longint;
begin
  readln(N);
  for i := N downto 1 do
    if (N mod i = 0) then
      writeln(i);
end.
