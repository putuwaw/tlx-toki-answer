#include <bits/stdc++.h>
using namespace std;

void draw(int N)
{
    if (N == 1)
    {
        cout << "*\n";
    }
    else
    {
        draw(N - 1);
        for (int i = 0; i < N; i++)
        {
            cout << "*";
        }
        cout << endl;
        draw(N - 1);
    }
}

int main()
{
    int N;
    cin >> N;
    draw(N);
    return 0;
}
