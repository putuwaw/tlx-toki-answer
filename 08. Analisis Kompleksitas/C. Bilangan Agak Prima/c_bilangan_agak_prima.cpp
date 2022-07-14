#include <iostream>
int main(){
  int N, num, factor;
  std::cin >> N;
  for (int i = 0; i < N; i++){
    std::cin >> num;
    factor = 0;
    for (int j = 1; j <= num; j++){
      if (num % j == 0){
        factor++;
      }
      if (factor > 4){
        break;
      }
    }
    factor <= 4 ? std::cout << "YA" : std::cout << "BUKAN";
    std::cout << std::endl;
  }
}
