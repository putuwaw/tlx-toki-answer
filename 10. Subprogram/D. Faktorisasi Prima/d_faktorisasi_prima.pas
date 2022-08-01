program d_faktorisasi_prima;
var
  N, i, power, pos: longint;
  isPrime : boolean;

function isFactor(N: longint; x: longint): boolean;
begin
  if (N mod x = 0) then
    isFactor := true
  else
    isFactor := false;
end;

begin
  readln(N);
  i := 2;
  pos := 0;
  while (N > 1) do begin
    isPrime := false;
    power := 0;
    if isFactor(N, i) then begin
      pos := pos + 1;
      isPrime := true;
    end;
    if isPrime then begin
      while N mod i = 0 do begin
        N := N div i;
        power := power + 1;
      end;
      if pos > 1 then write(' x ');
      if power > 1 then write(i, '^', power)
      else write(i);
    end;
    i := i + 1;
  end;
end.
