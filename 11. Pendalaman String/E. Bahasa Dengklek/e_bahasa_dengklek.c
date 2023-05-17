#include <stdio.h>
#include <string.h>
int main()
{
    char S[107];
    int i;
    scanf("%s", S);
    for (i = 0; i < strlen(S); i++)
    {
        printf("%c", S[i] ^ 32);
    }
    return 0;
}
