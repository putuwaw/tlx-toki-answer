#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    bool isCaps = false;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (isCaps == true)
        {
            cout << char(S[i] ^ 32);
            isCaps = false;
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            cout << "_" << char(S[i] ^ 32);
        }
        else if (S[i] == '_')
        {
            isCaps = true;
        }
        else
        {
            cout << S[i];
        }
    }
    cout << endl;
    return 0;
}
