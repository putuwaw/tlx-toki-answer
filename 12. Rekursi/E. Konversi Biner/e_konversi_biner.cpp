#include <bits/stdc++.h>
using namespace std;

void biner(int N)
{
    if (N == 1)
    {
        cout << 1;
    }
    else
    {
        biner(N >> 1);
        cout << N % 2;
    }
}

int main()
{
    int N;
    cin >> N;
    biner(N);
    return 0;
}
