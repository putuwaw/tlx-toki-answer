#include <stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  while (N % 2 == 0)
    N /= 2;
  N == 1 ? printf("ya\n") : printf("bukan\n");
  return 0;
}
