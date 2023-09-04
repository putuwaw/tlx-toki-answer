#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char *S)
{
    int len = strlen(S);
    if (len == 1)
    {
        return true;
    }
    else if (len == 2)
    {
        return S[0] == S[1];
    }
    else
    {
        if (S[0] == S[len - 1])
        {
            char sub[101];
            for (int i = 0; i < len - 2; i++)
            {
                sub[i] = S[i + 1];
            }
            sub[len - 2] = '\0';
            return palindrome(sub);
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    char S[101];
    scanf("%[^\n]%*c", S);
    if (palindrome(S))
    {
        printf("YA\n");
    }
    else
    {
        printf("BUKAN\n");
    }
    return 0;
}
