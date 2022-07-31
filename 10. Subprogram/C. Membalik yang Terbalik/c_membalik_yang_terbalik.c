#include <stdio.h>

int reverse(int x){
  int res = 0;
  while (x > 0){
    res = res * 10 + x % 10;
    x /= 10;
  }
  return res;
}

int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  printf("%d", reverse(reverse(A) + reverse(B)));
  return 0;
}
