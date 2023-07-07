S = input()
isCaps = False
for i in S:
    if isCaps:
        print(chr(ord(i) ^ 32), end="")
        isCaps = False
    elif i.isupper():
        print("_", chr(ord(i) ^ 32), sep="", end="")
    elif i == "_":
        isCaps = True
    else:
        print(i, end="")
print()
