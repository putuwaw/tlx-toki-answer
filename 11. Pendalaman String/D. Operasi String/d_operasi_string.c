#include <stdio.h>
#include <string.h>

char *strremove(char *str, const char *sub){
    size_t len = strlen(sub);
    if (len > 0){
        char *p = str;
        while ((p = strstr(p, sub)) != NULL){
            memmove(p, p + len, strlen(p + len) + 1);
        }
    }
    return str;
}
int main(){
    char S1[1001], S2[1001], S3[1001], S4[1001];
    scanf("%s", S1);
    scanf("%s", S2);
    scanf("%s", S3);
    scanf("%s", S4);
    strremove(S1, S2);
    long lpos = strstr(S1, S3) - S1 + strlen(S3);
    strncpy(S2, S1, lpos);
    S2[lpos] = '\0';
    strcat(S2, S4);
    strcat(S2, S1 + lpos);
    strcpy(S1, S2);
    printf("%s\n", S1);
    return 0;
}
