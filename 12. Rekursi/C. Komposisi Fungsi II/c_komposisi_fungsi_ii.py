def fx(A, B, K, x):
    return abs(A * x + B)  if K == 1 \
        else abs(A * fx(A, B, K - 1, x) + B)

A, B, K, x = map(int, input().split())
print(fx(A, B, K, x))
