program a_break_continue_exit;
var
  N, i : integer;
begin
  readln(N);
  for i := 1 to N do begin
      if (i mod 10 = 0) then
        continue
      else if (i = 42) then begin
        writeln('ERROR');
        break
      end
      else
        writeln(i);
    end;
end.
