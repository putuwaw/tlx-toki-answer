program e_perkalian_matriks;
var
    A, B, C : array[1..100, 1..100] of longint;
    N, M, P, i, j, k : longint;
begin
    read(N, M, P);
    for i := 1 to N do
        for j := 1 to M do
            read(A[i, j]);
    for i := 1 to M do
        for j := 1 to P do
            read(B[i, j]);
    for i := 1 to N do begin
        for j := 1 to P do begin
            C[i, j] := 0;
            for k := 1 to M do begin
                C[i, j] := C[i, j] + (A[i, k] * B[k, j]);
            end;
            write(C[i, j], ' ');
        end;
        writeln();
    end;
end.
