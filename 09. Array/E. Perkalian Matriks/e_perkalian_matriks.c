#include <stdio.h>
int main(){
  int N, M, P, i, j, k;
  scanf("%d %d %d", &N, &M, &P);
  int A[N][M], B[M][P], C[N][P];
  for (i = 0; i < N; i++){
    for (j = 0; j < M; j++){
      scanf("%d", &A[i][j]);
    }
  }
  for (i = 0; i < M; i++){
    for (j = 0; j < P; j++){
      scanf("%d", &B[i][j]);
    }
  }
  for (i = 0; i < N; i++){
    for (j = 0; j < P; j++){
      C[i][j] = 0;
      for (k = 0; k < M; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
