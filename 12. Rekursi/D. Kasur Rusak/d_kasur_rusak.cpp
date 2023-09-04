#include <bits/stdc++.h>
using namespace std;

bool palindrome(string S)
{
    int len = S.length();
    if (len == 1)
        return true;
    else if (len == 2)
        return S[0] == S[1];
    else
        return S[0] == S[len - 1] && palindrome(S.substr(1, len - 2));
}

int main()
{
    string S;
    getline(cin, S);
    if (palindrome(S))
        cout << "YA" << endl;
    else
        cout << "BUKAN" << endl;
    return 0;
}
