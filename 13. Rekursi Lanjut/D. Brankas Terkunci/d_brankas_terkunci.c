#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N, K;
bool isVisited[17];
int save[17];

void draw(int depth)
{
    if (depth >= K - 1)
    {
        int i;
        for (i = 0; i < K; i++)
        {
            printf("%d ", save[i] + 1);
        }
        printf("\n");
    }
    else
    {
        int i;
        for (i = save[depth] + 1; i < N; i++)
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
    scanf("%d %d", &N, &K);
    memset(isVisited, false, sizeof(isVisited));

    int i;
    for (i = 0; i < N; i++)
    {
        save[0] = i;
        draw(0);
    }
    return 0;
}
