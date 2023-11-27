program c_permutasi_zigzag;

var
N, i : integer;
isVisited: array[1..17] of boolean;
save: array[1..17] of integer;

procedure draw(depth : integer);
var
isZigZag, h, l : boolean;
j, k : integer;
begin
	if (depth > N) then begin
		isZigZag := true;
		if (N >= 3) then begin
			for j := 2 to N-1 do begin
				h := (save[j] > save[j-1]) and (save[j] > save[j + 1]);
				l := (save[j] < save[j - 1]) and (save[j] < save[j + 1]);
				if not(h or l) then isZigZag := false;
			end;
		end;
		if (N < 3) or (isZigZag = true) then begin
			for j := 1 to N do write(save[j]);
			writeln;
		end;
	end
	else begin
		for k := 1 to N do begin
			if (not isVisited[k]) then begin
				isVisited[k] := true;
				save[depth] := k;
				draw(depth + 1);
				isVisited[k] := false;
			end;
		end;
	end;
end;

begin
	readln(N);
	for i := 1 to 17 do isVisited[i] := false;
		
    draw(1);
end.
