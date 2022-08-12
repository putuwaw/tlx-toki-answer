program b_pembuangan_string;
var
  S, T : string;
begin
  readln(S);
  T := copy(S, pos(' ',S)+1, length(S) - pos(' ',S));
  S := copy(S, 1, pos(' ',S) - 1);
  while (pos(T,S) <> 0) do begin
    delete(S, pos(T,S), length(T));
  end;
  writeln(S);
end.