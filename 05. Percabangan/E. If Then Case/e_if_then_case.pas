program e_if_then_case;
var N : longint;
begin
  readln(N);
  if N > 9999 then begin
      writeln('puluhribuan');
  end
  else if N > 999 then begin
    writeln('ribuan');
  end
  else if N > 99 then begin
    writeln('ratusan');
  end
  else if N > 9 then begin
    writeln('puluhan');
  end
  else begin
    writeln('satuan');
  end;
end.
