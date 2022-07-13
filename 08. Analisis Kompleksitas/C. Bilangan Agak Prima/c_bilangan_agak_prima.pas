program c_bilangan_agak_prima;
var
  N, i : integer;
  j, num, factor : longint;
begin
  readln(N);
  for i := 1 to N do begin
    readln(num);
    factor := 0;
    for j := 1 to num do begin
      if (num Mod j = 0) then
        factor := factor + 1;
      if (factor > 4) then break;
    end;
    if (factor <= 4) then
      writeln('YA')
    else
      writeln('BUKAN');
  end;
end.
