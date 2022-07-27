def swap(arr, P, Q, x, y):
    first = arr[P][x-1]
    second = arr[Q][y-1]
    arr[P].pop(x-1)
    arr[P].insert(x-1, second)
    arr[Q].pop(y-1)
    arr[Q].insert(y-1, first)

N = int(input())
arr = []
for i in range(2):
    arr.append(list(map(int, input().split())))
T = int(input())
for i in range(T):
    line = list(input().split())
    P, x = ord(line[0]) - ord('A'), int(line[1])
    Q, y = ord(line[2]) - ord('A'), int(line[3])
    swap(arr, P, Q, x, y)
for i in range(2):
    for j in range(N):
        print(arr[i][j], end=' ')
    print()
