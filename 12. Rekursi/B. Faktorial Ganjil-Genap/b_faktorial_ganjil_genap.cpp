#include <bits/stdc++.h>
using namespace std;

int factorial_gg(int N)
{
    if (N == 1)
        return 1;
    else if (N % 2 == 0)
        return N / 2 * factorial_gg(N - 1);
    else
        return N * factorial_gg(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << factorial_gg(N) << endl;
    return 0;
}
