N, D = map(int, input().split())
T = []
minRes = maxRes = 0
for _ in range(N):
    line = list(map(int, input().split()))
    T.append(line)
for i in range(N):
    for j in range(i+1, N):
        res = (abs(T[i][0] - T[j][0]) ** D) + (abs(T[i][1] - T[j][1]) ** D)
        if (i == 0 and j == 1):
            minRes = maxRes = res
        else:
            if (res < minRes):
                minRes = res
            if (res > maxRes):
                maxRes = res
print(minRes, maxRes)
