#include <iostream>
int main(){
  int N;
  std::cin >> N;
  for (int i = N; i > 0; i--)
    if (N % i == 0)
      std::cout << i << std::endl;
  return 0;
}
