program f_gaya_penulisan_variabel;
var
    S : string;
    i : integer;
    isCaps : boolean;
begin
    readln(S);
    isCaps := false;
    for i:=1 to length(S) do begin
        if (isCaps = true) then 
            begin
                write(chr(ord(S[i]) xor 32));
                isCaps := false;
            end
        else if (S[i] >= 'A') and (S[i] <= 'Z') then
            write('_', chr(ord(S[i]) xor 32))
        else if (S[i] = '_') then
            isCaps := true
        else
            write(S[i]);
    end;
    writeln;
end.
