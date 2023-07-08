program b_faktorial_ganjil_genap;

function factorial_gg(N : integer): longint;
begin
    if (N = 1) then factorial_gg := 1
    else if (N mod 2 = 0) then factorial_gg := (N div 2) * factorial_gg(N-1)
    else factorial_gg := N * factorial_gg(N-1);
end;

var
    N : integer;

begin
    readln(N);
    writeln(factorial_gg(N));
end.
