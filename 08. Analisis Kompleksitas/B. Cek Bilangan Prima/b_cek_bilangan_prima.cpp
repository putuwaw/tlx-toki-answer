#include <iostream>
int main(){
  int N, num;
  bool isPrime;
  std::cin >> N;
  for (int i = 0; i < N; i++){
    std::cin >> num;
    isPrime = true;
    if (num == 1){
      isPrime = false;
    }
    else{
      for (int j = 2; j * j <= num; j++){
        if (num % j == 0){
          isPrime = false;
          break;
        }
      }
    }
    isPrime == true ? std::cout << "YA" << std::endl : std::cout << "BUKAN" << std::endl;
  }
  return 0;
}
