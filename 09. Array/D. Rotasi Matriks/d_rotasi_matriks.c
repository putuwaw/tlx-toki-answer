#include <stdio.h>
int main(){
  int N, M, i, j;
  scanf("%d %d", &N, &M);
  int arr[N][M];
  for (i = 0; i < N; i++){
    for (j = 0; j < M; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 0; i < M; i++){
    for (j = (N - 1); j >= 0; j--){
      printf("%d", arr[j][i]);
      if (j > 0)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
