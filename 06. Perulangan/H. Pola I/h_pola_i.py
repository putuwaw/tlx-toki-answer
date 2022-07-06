N, K = map(int, input().split())
for i in range(1,N+1):
    if i % K == 0:
        print('*', end='')
    else:
        print(i, end='')
    if i != N:
        print(' ', end='')
    else:
        print('')
