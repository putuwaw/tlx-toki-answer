program b_tukang_sulap;
var
  N, T, i, j, x, y, p1, q1 : integer;
  arr : array[1..2, 1..1000] of longint;
  P, Q, space : char;

procedure swap(var a, b: longint);
var
  temp : longint;
begin
  temp := a;
  a := b;
  b := temp;
end;

begin
  readln(N);
  for i := 1 to 2 do
    for j := 1 to N do
      read(arr[i,j]);
  readln(T);
  for i := 1 to T do begin
    readln(P, space, x, space, Q, space, y);
    p1 := ord(P) - ord('A') + 1;
    q1 := ord(Q) - ord('A') + 1;
    swap(arr[p1, x], arr[q1, y]);
  end;
  for i := 1 to 2 do begin
    for j := 1 to N do
      write(arr[i,j], ' ');
    writeln;
  end;
end.
