program b_menggambar_pegunungan;

var
N : integer;

procedure draw(N : integer);
var
i : integer;
begin
	if (N = 1) then begin
		writeln('*');
	end
		else begin
		draw(N-1);
			for i := 1 to N do begin
			    write('*');
			end;
		writeln;
		draw(N-1);
		end;
end;

begin
    readln(N);
    draw(N);
    readln;
end.
