#include <stdio.h>

void draw(int N)
{
    if (N == 1)
    {
        printf("*\n");
    }
    else
    {
        draw(N - 1);
        int i;
        for (i = 0; i < N; i++)
        {
            printf("*");
        }
        printf("\n");
        draw(N - 1);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    draw(N);
    return 0;
}
