def write(depth):
    if depth > N:
        isZigZag = True
        if N >= 3:
            for i in range(2, N):
                h = save[i] > save[i-1] and save[i] > save[i + 1]
                l = save[i] < save[i-1] and save[i] < save[i + 1]
                if not (h or l):
                    isZigZag = False
                    break
        if N < 3 or isZigZag:
            for i in range(1, N+1):
                print(save[i], end='')
            print()
    else:
        for i in range(1, N+1):
            if not isVisited[i]:
                isVisited[i] = True
                save[depth] = i
                write(depth+1)
                isVisited[i] = False


isVisited = [False] * 10
save = [0] * 10
N = int(input())
write(1)
