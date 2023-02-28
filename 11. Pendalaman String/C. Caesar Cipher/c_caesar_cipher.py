string = input()
K = int(input())
for s in string:
    print(chr((ord(s) + K - ord('a')) % 26 + ord('a')), end="")
print()
