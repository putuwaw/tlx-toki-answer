program c_while;
var 
  str : string;
begin
  while not eof(input) do begin
    readln(str);
    writeln(str);
  end;
end.
