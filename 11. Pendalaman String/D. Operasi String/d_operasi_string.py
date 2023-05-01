S1 = input()
S2 = input()
S3 = input()
S4 = input()

S1 = S1.replace(S2, "")
pos = S1.index(S3)
S1 = S1[:pos+len(S3)] + S4 + S1[pos + len(S3):]
print(S1)
