#include <stdio.h>
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
    scanf("%d", &N);
    printf("%d\n", factorial_gg(N));
    return 0;
}
