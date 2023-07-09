program c_komposisi_fungsi_ii;

function fx(A, B, K, x: integer): integer;
begin
    if (K = 1) then
        fx := abs(A*x + B)
    else
        fx := abs(A*fx(A, B, K-1, x) + B);
end;

var
    A, B, K, x : integer;

begin
    readln(A, B, K, x);
    writeln(fx(A, B, K, x));
end.
