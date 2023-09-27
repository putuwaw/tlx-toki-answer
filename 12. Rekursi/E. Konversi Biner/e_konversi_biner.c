#include <stdio.h>

void biner(int N)
{
    if (N == 1)
    {
        printf("1");
    }
    else
    {
        biner(N >> 1);
        printf("%d", N % 2);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    biner(N);
    return 0;
}
