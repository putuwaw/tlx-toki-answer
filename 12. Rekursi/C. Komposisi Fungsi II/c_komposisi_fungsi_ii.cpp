#include <bits/stdc++.h>
using namespace std;

int fx(int A, int B, int K, int x)
{
    if (K == 1)
    {
        return abs(A * x + B);
    }
    else
    {
        return abs(A * fx(A, B, K - 1, x) + B);
    }
}

int main()
{
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << fx(A, B, K, x) << endl;
    return 0;
}
