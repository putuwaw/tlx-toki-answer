import sys
idx = 0
arr = []
for num in sys.stdin:
    idx += 1
    arr.append(int(num))
for i in range(idx-1, -1, -1):
    print(arr[i], sep="")
