N = int(input())
if (N > 9999):
    print("puluhribuan")
elif (N > 999):
    print("ribuan")
elif (N > 99):
    print("ratusan")
elif (N > 9):
    print("puluhan")
else:
    print("satuan")
