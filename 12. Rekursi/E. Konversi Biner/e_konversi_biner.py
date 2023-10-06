def biner(N):
    if N == 1:
        print(1, end="")
    else:
        biner(N//2)
        print(N%2, end="")

N = int(input())
biner(N)
