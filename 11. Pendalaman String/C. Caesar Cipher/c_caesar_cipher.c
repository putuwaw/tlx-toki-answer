#include <stdio.h>
#include <string.h>
int main(){
    char string[101];
    int K;
    scanf("%s", string);
    fflush(stdin);
    scanf("%d", &K);
    for (int i = 0; i < strlen(string); i++){
        printf("%c", ((char)string[i] - 'a' + K) % 26 + 'a');
    }
    printf("\n");
    return 0;
}
