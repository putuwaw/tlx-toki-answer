import math

N = float(input())
if (N >= 0):
    if (N > math.trunc(N)):
        print(math.trunc(N), math.trunc(N)+1)
    else:
        print(math.trunc(N), math.trunc(N))
else:
    if (N < math.trunc(N)):
        print(math.trunc(N)-1, math.trunc(N))
    else:
        print(math.trunc(N), math.trunc(N))
