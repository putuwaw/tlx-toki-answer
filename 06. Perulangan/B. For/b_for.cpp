#include <iostream>
int main(){
  int N, i, B, res;
  std::cin >> N;
  res = 0;
  for (i = 0; i < N; i++){
    std::cin >> B;
    res += B;
  }
  std::cout << res << std::endl;
  return 0;
}
