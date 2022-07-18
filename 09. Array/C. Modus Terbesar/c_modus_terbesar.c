#include <stdio.h>
int main(){
  int arr[1001], N, i, num, ans;
  scanf("%d", &N);
  for (i = 0; i <= 1000; i++) arr[i] = 0;
  for (i = 1; i <= N; i++){
    scanf("%d", &num);
    arr[num] += 1;
  }
  ans = 0;
  for (i = 0; i <= 1000; i++)
    if (arr[i] >= arr[ans])
      ans = i;
  printf("%d\n", ans);
  return 0;
}
