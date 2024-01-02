def draw(depth):
    if depth >= K-1:
        for i in range(K):
            print(save[i]+1, end=" ")
        print()
    else:
        for i in range(save[depth]+1, N):
            if not isVisited[i]:
                isVisited[i] = True
                save[depth+1] = i
                draw(depth+1)
                isVisited[i] = False


isVisited = [False] * 10
save = [0] * 10
N, K = map(int, input().split())

for i in range(N):
    save[0] = i
    draw(0)
