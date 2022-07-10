program c_pola_iii;
var
  N, i, j, counter : integer;
begin
  counter := 0;
  readln(N);
  for i := 1 to N do begin
    for j := 1 to i do begin
      write(counter mod 10);
      counter := counter + 1;
    end;
    writeln();
  end;
end.
