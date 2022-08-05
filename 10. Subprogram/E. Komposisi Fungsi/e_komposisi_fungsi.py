def fx(A, B, x):
    return abs(A*x + B)

A, B, K, x = map(int, input().split())
for _ in range(K):
    x = fx(A, B, x)
print(x)
