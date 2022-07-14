N = int(input())
for i in range(N):
    num = int(input())
    factor = 0
    j = 2
    while j*j <= num:
        if num % j == 0:
            factor += 1
        if factor > 1:
            break
        j += 1
    if (factor <= 1):
        print("YA")
    else:
        print("BUKAN")
