program e_konversi_biner;

procedure biner(N: longint);
begin
    if N = 1 then
        write(1)
    else begin
        biner(N shr 1);
        write(N mod 2);
    end;
end;

var
    N: longint;
begin
    readln(N);
    biner(N);
end.
