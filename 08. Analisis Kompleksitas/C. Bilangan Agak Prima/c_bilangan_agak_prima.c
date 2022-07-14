#include <stdio.h>
int main(){
  int N, i, j, num, factor;
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &num);
    factor = 0;
    for (j = 1; j <= num; j++){
      if (num % j == 0){
        factor++;
      }
      if (factor > 4){
        break;
      }
    }
    factor <= 4 ? printf("YA\n") : printf("BUKAN\n");
  }
  return 0;
}
