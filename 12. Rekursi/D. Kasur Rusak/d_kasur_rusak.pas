program d_kasur_rusak;

function palindrome(str: string): boolean;
var
    len: integer;
    sub: boolean;
begin
    len := length(str);
    if len = 1 then
        palindrome := true
    else if len = 2 then
        palindrome := str[1] = str[2]
    else begin
        if str[1] = str[len] then
            sub := palindrome(copy(str, 2, len - 2))
        else
            sub := false;
        palindrome := sub;
    end;
end;

var
    S: string;
begin
    readln(S);
    if palindrome(S) then
        writeln('YA')
    else
        writeln('BUKAN');
end.
