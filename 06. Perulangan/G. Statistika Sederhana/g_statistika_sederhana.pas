program g_statistika_sederhana;
var
  N, i : integer;
  num, A, B: longint;
begin
  readln(N);
  for i := 1 to N do begin
    read(num);
    if (i = 1) then begin
      A := num;
      B := num;
    end
    else begin
      if (num > A) then A := num;
      if (num < B) then B := num;
    end;
  end;
  writeln(A, ' ', B);
end.
