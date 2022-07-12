program b_cek_bilangan_prima;
var
  N, i, j : integer;
  num : longint;
  isPrime : boolean;
begin
  readln(N);
  for i := 1 to N do begin
    readln(num);
    isPrime := true;
    if (num = 1) then
      isPrime := false
    else
      for j := 2 to trunc(sqrt(num)) do begin
        if (num mod j = 0) then begin
          isPrime := false;
          break;
        end;
      end;
    if (isPrime) then
      writeln('YA')
    else
      writeln('BUKAN');
  end;
end.
