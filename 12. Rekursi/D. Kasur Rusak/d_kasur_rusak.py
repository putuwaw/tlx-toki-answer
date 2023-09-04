def palindrome(S):
    if len(S) == 1:
        return True
    elif len(S) == 2:
        return S[0] == S[1]
    else:
        return S[0] == S[-1] and palindrome(S[1:-1])

S = input()
print("YA") if palindrome(S) else print("BUKAN")
