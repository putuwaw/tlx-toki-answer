def isFactor(N, x):
    if N % x == 0:
        return True
    return False

N = int(input())
i = 2
pos = 0
while N > 1:
    isPrime = False
    power = 0
    if isFactor(N, i):
        isPrime = True
        pos += 1
        while N % i == 0:
            N = N // i
            power += 1
        if pos > 1:
            print(" x ", end="")
        print(i, end="")
        if (power > 1):
            print("^", power, sep="", end="")
    i += 1