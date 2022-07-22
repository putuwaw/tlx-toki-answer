N, M, P = map(int, input().split())
A = []
B = []
C = []
for i in range(N):
    A.append(list(map(int, input().split())))
    C.append([0]*P)
for i in range(M):
    B.append(list(map(int, input().split())))
for i in range(N):
    for j in range(P):
        C[i][j] = 0
        for k in range(M):
            C[i][j] += A[i][k] * B[k][j]
        print(C[i][j], end=" ")
    print()
