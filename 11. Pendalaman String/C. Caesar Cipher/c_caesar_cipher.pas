program c_caesar_chiper;

var
S : string;
K, i : longint;

begin
  readln(S, K);
  for i := 1 to length(S) do
    S[i] := chr((ord(S[i]) - ord('a') + K) mod 26 + ord('a'));
  writeln(S);
end.
