N = int(input())
for i in range(N):
    num = int(input())
    isPrime = True
    if (num == 1):
        isPrime = False
    else:
        j = 2
        while (j*j <= num):
            if (num % j == 0):
                isPrime = False
                break
            j += 1
    if (isPrime):
        print("YA")
    else:
        print("BUKAN")
