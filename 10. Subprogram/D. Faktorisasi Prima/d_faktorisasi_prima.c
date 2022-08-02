#include <stdio.h>
#include <stdbool.h>

bool isFactor(int N, int x){
  if (N % x == 0){
    return true;
  }
  return false;
}

int main(){
  int N, i, power, pos;
  bool isPrime;
  scanf("%d", &N);
  i = 2;
  pos = 0;
  while (N > 1){
    isPrime = false;
    power = 0;
    if (isFactor(N, i)){
      pos++;
      isPrime = true;
    }
    if (isPrime){
      while (N % i == 0){
        N /= i;
        power++;
      }
      if (pos > 1){
        printf(" x ");
      }
      power > 1 ? printf("%d^%d", i, power) : printf("%d", i);
    }
    i++;
  }
  return 0;
}
