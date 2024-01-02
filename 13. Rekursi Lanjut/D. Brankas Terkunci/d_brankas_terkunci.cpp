#include <bits/stdc++.h>
using namespace std;

int N, K;
bool isVisited[17];
int save[17];

void draw(int depth)
{
    if (depth >= K - 1)
    {

        for (int i = 0; i < K; i++)
        {
            cout << save[i] + 1 << " ";
        }
        cout << endl;
    }
    else
    {

        for (int i = save[depth] + 1; i < N; i++)
        {
            if (!isVisited[i])
            {
                isVisited[i] = true;
                save[depth + 1] = i;
                draw(depth + 1);
                isVisited[i] = false;
            }
        }
    }
}
int main()
{
    cin >> N >> K;
    memset(isVisited, false, sizeof(isVisited));

    for (int i = 0; i < N; i++)
    {
        save[0] = i;
        draw(0);
    }
    return 0;
}
