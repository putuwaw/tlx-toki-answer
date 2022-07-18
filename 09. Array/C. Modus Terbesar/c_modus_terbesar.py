N = int(input())
line = list(map(int, input().split()))
arr = [0] * 1001
for i in line:
    arr[i] += 1
ans = 0
for i in range(1001):
    if (arr[i] >= arr[ans]):
        ans = i
print(ans)
