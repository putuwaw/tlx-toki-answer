S, T = input().split()
while T in S:
    S = S.replace(T, '')
print(S)
