def reverse(x):
    res = 0
    while x > 0:
        res = res * 10 + x % 10
        x = x // 10
    return res

A, B = map(int, input().split())
print(reverse(reverse(A) + reverse(B)))
