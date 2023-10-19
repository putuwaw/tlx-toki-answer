def draw(N):
    if N == 1:
        print("*")
    else:
        draw(N-1)
        print("*" * N, end="")
        print()
        draw(N-1)
N = int(input())
draw(N)
