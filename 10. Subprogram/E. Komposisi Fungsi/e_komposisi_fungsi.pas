program e_komposisi_fungsi;
var
  A, B, K, x, i : integer;

function fx(A, B, x: integer):integer;
begin
  fx := abs(A * x + B);
end;

begin
  read(A, B, K, x);
  for i := 1 to K do x := fx(A, B, x);
  writeln(x);
end.
