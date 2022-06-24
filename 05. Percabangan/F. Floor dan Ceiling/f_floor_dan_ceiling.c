#include <stdio.h>
#include <math.h>
int main(){
  double N;
  scanf("%lf", &N);
  if (N >= 0){
    if (N > trunc(N))
      printf("%0.lf %0.lf\n", trunc(N), trunc(N) + 1);
    else
      printf("%0.lf %0.lf\n", N, N);
  }
  else{
    if (N < trunc(N))
      printf("%0.lf %0.lf\n", trunc(N) - 1, trunc(N));
    else
      printf("%0.lf %0.lf\n", N, N);
  }
}
