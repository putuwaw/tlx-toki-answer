#include <stdio.h>
int main(){
  int N, i, j, counter = 0;
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    for (j = 0; j < i + 1; j++){
      printf("%d", counter % 10);
      counter++;
    }
    printf("\n");
  }
  return 0;
}
