#include <stdio.h>
#include <stdlib.h>

int fx(int A, int B, int x){
  return abs(A * x + B);
}

int main(){
  int A, B, K, x;
  scanf("%d %d %d %d", &A, &B, &K, &x);
  while (K--){
    x = fx(A, B, x);
  }
  printf("%d\n", x);
  return 0;
}
