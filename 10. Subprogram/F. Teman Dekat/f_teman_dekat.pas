program f_teman_dekat;
var 
  N, D, i, j, res, min, max : longint;
  T : array[1..1001, 1..1001] of longint;

function power(base: longint; exp: longint): longint;
var
  res : longint;
begin
  res := base;
  while exp > 1 do begin
    res := res * base;
    exp := exp - 1;
  end;
  power := res;
end;

begin
  readln(N, D);
  for i := 1 to N do
    for j := 1 to 2 do
      read(T[i, j]);
  for i := 1 to N do begin
    for j := (i + 1) to N do begin
      res := power(abs(T[j,1] - T[i,1]), D) + power(abs(T[j,2] - T[i,2]), D);
      if (i = 1) and (j = 2) then begin
        min := res;
        max := res;
      end
      else begin
        if res < min then min := res;
        if res > max then max := res;
      end;
    end;
  end;
  writeln(min, ' ', max);
end.
