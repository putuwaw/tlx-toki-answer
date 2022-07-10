#include <iostream>
int main(){
  int N, counter = 0;
  std::cin >> N;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < i + 1; j++){
      std::cout << counter % 10;
      counter++;
    }
    std::cout << std::endl;
  }
  return 0;
}
