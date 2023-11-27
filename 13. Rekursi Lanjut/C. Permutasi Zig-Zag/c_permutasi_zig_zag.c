#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N;
bool isVisited[17];
int save[17];

void write(int depth){
    if (depth > N){
        bool isZigZag = true;
        if (N >= 3){
            for (int i = 2; i < N; i++){
                bool h = (save[i] > save[i-1]) && (save[i] > save[i + 1]);
                bool l = (save[i] < save[i - 1]) && (save[i] < save[i + 1]);
                if (!(h || l)){
                    isZigZag = false;
                    break;
                }
            }
        }
        if (N < 3 || isZigZag){
            for (int i = 1; i <= N; i++){
                printf("%d", save[i]);
            }
            printf("\n");
        }
    }else{
        for (int i = 1; i <= N; i++){
            if (!isVisited[i]){
                isVisited[i] = true;
                save[depth] = i;
                write(depth + 1);
                isVisited[i] = false;
            }
        }
    }
}

int main(){
    scanf("%d", &N);
    memset(isVisited, false, sizeof(isVisited));

    write(1);
    return 0;
}
