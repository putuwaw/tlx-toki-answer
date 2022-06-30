#include <iostream>
int main(){
  int N;
  std::cin >> N;
  while (N % 2 == 0)
    N /= 2;
  N == 1 ? std::cout << "ya" << std::endl : std::cout << "bukan" << std::endl;
  return 0;
}
