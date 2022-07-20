program d_rotasi_matriks;
var
    arr : array[1..100, 1..100] of integer;
    N, M, i, j : integer;
begin
    readln(N, M);
    for i := 1 to N do
    for j := 1 to M do
        read(arr[i,j]);
    for i := 1 to M do begin
        for j := N downto 1 do begin
            write(arr[j,i]);
            if (j > 1) then
                write(' ');
        end;
        writeln();
    end;
end.
