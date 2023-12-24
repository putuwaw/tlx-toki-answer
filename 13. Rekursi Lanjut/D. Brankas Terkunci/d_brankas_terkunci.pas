program d_brankas_terkunci;

var
N, K, i : integer;
isVisited: array[1..17] of boolean;
save: array[1..17] of integer;

procedure draw(depth : integer);
var
j, l : integer;
begin
	if (depth >= K) then begin
		for j := 1 to K do write(save[j], ' ');
		writeln;
	end
	else begin
		for l := (save[depth]+1) to N do begin
			if (not isVisited[l]) then begin
				isVisited[l] := true;
				save[depth+1] := l;
				draw(depth + 1);
				isVisited[l] := false;
			end;
		end;
	end;
end;

begin
	readln(N, K);
	for i := 1 to 17 do isVisited[i] := false;

	for i:= 1 to N do begin
		save[1] := i;
		draw(1);
	end;
end.
