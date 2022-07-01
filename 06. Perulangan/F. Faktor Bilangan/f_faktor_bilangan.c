#include <stdio.h>
int main(){
  int N, i;
  scanf("%d", &N);
  for (i = N; i > 0; i--)
    if (N % i == 0)
      printf("%d\n", i);
  return 0;
}
