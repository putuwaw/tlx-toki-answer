program c_modus_terbesar;
var
    arr : array[1..1000] of longint;
    N, i, num, ans : longint;
begin
    readln(N);
    for i := 1 to 1000 do arr[i] := 0;
    for i := 1 to N do begin
      read(num);
      arr[num] := arr[num]+1;
    end;
    ans := 1;
    for i := 1 to 1000 do
      if (arr[i] >= arr[ans]) then
        ans := i;
    writeln(ans);
end.
