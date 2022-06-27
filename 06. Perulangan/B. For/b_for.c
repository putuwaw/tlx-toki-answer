#include <stdio.h>
int main(){
  int N, i, B, res;
  scanf("%d", &N);
  res = 0;
  for (i = 0; i < N; i++){
    scanf("%d", &B);
    res += B;
  }
  printf("%d\n", res);
  return 0;
}
