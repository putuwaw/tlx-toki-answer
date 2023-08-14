#include <stdio.h>
#include <stdlib.h>

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
    scanf("%d %d %d %d", &A, &B, &K, &x);
    printf("%d\n", fx(A, B, K, x));
    return 0;
}
