#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        cout << char(S[i] ^ 32);
    }
    return 0;
}
