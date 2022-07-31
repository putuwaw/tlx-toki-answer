program c_membalik_yang_terbalik;
var 
  A, B: longint;

function reverse(x: longint): longint;
var 
  res: longint;
begin
  res := 0;
  while x > 0 do begin
      res := res * 10 + x mod 10;
      x := x div 10;
  end;
  reverse := res;
end;

begin
  readln(A, B);
  writeln(reverse(reverse(A) + reverse(B)));
end.
