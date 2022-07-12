#include <stdio.h>
#include <stdbool.h>
int main(){
  int N, i, j, num;
  bool isPrime;
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &num);
    isPrime = true;
    if (num == 1){
      isPrime = false;
    }
    else{
      for (j = 2; j * j <= num; j++){
        if (num % j == 0){
          isPrime = false;
          break;
        }
      }
    }
    isPrime == true ? printf("YA\n") : printf("BUKAN\n");
  }
  return 0;
}
