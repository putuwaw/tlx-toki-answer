#include <stdio.h>
int main(){
    int idx = 0, arr[101];
    while (scanf("%d", &arr[idx]) != EOF){
        idx++;
    }
    while(idx--){
        printf("%d\n", arr[idx]);
    }
    return 0;
}
