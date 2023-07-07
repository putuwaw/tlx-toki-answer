#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char S[107];
    int i;
    bool isCaps = false;
    scanf("%s", S);
    for (i = 0; i < strlen(S); i++)
    {
        if (isCaps == true)
        {
            printf("%c", S[i] ^ 32);
            isCaps = false;
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            printf("_%c", S[i] ^ 32);
        }
        else if (S[i] == '_')
        {
            isCaps = true;
        }
        else
        {
            printf("%c", S[i]);
        }
    }
    printf("\n");
    return 0;
}
