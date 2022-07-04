program h_pola_i;
var
  N, K, i : integer;
begin
  readln(N, K);
  for i := 1 to N do begin
      if (i mod K = 0) then
        write('*')
      else
        write(i);
      if (i <> N) then
        write(' ')
      else
        writeln();
    end;
end.
