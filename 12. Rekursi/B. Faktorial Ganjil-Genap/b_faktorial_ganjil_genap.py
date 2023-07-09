def factorial_gg(N):
    if N == 1:
        return 1
    elif N % 2 == 0:
        return (N // 2) * factorial_gg(N - 1)
    else:
        return N * factorial_gg(N - 1)

N = int(input())
print(factorial_gg(N))
