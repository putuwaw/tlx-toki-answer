#include <stdio.h>
int main(){
  int num, res;
  res = 0;
  while (scanf("%d", &num) != EOF){
    res += num;
  }
  printf("%d\n", res);
  return 0;
}
