#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int N, T, i, j, x, y, p1, q1;
  char P, Q, space;
  scanf("%d", &N);
  int arr[2][N];
  for (i = 0; i < 2; i++){
    for (j = 0; j < N; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  scanf("%d", &T);
  for (i = 0; i < T; i++){
    scanf("%c%c%d%c%c%c%d", &space, &P, &x, &space, &Q, &space, &y);
    p1 = P - 'A';
    q1 = Q - 'A';
    x--;
    y--;
    swap(&arr[p1][x], &arr[q1][y]);
  }
  for (i = 0; i < 2; i++){
    for (j = 0; j < N; j++){
      printf("%d", arr[i][j]);
      if (j < N - 1){
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
