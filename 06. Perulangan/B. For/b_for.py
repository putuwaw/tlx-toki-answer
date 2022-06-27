N = int(input())
B = list(map(int, input().split()))
res = 0
for i in range(N):
    res += B[i]
print(res)
