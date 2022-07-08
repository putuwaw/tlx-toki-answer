program b_pola_ii;
var
  N, i, j : integer;
begin
  readln(N);
  for i := 1 to N do begin
    for j := 1 to N do begin
      if (j <= N - i) then
        write(' ')
      else
        write('*');
    end;
    writeln();
  end;
end.
