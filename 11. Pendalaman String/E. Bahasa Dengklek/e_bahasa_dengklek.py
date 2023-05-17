S = input()
for i in S:
    print(chr(ord(i) ^ 32), end="")
