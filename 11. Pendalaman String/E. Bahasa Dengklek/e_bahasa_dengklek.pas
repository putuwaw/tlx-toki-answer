program e_bahasa_dengklek;
var
    S : string;
    i : integer;
begin
    readln(S);
    for i:=1 to length(S) do
        write(chr(ord(S[i]) xor 32));
    writeln;
end.
