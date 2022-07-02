#include <stdio.h>
int main(){
  int N, i, num, A, B;
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &num);
    if (i == 0){
      A = num;
      B = num;
    }
    else {
      if (num > A)
        A = num;
      if (num < B)
        B = num;
    }
  }
  printf("%d %d\n", A, B);
  return 0;
}
