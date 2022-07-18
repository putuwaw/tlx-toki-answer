#include <iostream>
int main(){
  int arr[1001], N, i, num, ans;
  std::cin >> N;
  for (i = 0; i <= 1000; i++) arr[i] = 0;
  for (i = 1; i <= N; i++){
    std::cin >> num;
    arr[num] += 1;
  }
  ans = 0;
  for (i = 0; i <= 1000; i++)
    if (arr[i] >= arr[ans])
      ans = i;
  std::cout << ans << std::endl;
  return 0;
}
