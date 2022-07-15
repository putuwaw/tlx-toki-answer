program b_balik_daftar;
var
    idx : integer;
    arr : array[0..101] of longint;
begin
    idx := -1;
    while not eof(input) do begin
        idx := idx + 1;
        readln(arr[idx]);
    end;
    while (idx >= 0) do begin
        writeln(arr[idx]);
        idx := idx - 1;
    end;
end.
