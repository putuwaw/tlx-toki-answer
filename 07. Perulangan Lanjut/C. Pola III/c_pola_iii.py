N = int(input())
counter = 0
for i in range(N):
    for j in range(i+1):
        print(counter % 10, end='')
        counter += 1
    print()
