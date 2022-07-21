N, M = map(int, input().split())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))
for i in range(M):
    for j in range(N-1, -1, -1):
        print(arr[j][i], end=" ")
    print()
