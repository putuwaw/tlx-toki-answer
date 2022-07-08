#include <stdio.h>
int main(){
  int N, i, j;
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      if (j < N - i - 1){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
