#include <stdio.h>
int main(){
  int N, K, i;
  scanf("%d %d", &N, &K);
  for (i = 1; i <= N; i++){
    if (i % K == 0)
      printf("*");
    else
      printf("%d", i);
    if (i != N)
      printf(" ");
    else
      printf("\n");
  }
  return 0;
}
