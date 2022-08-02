#include <iostream>

bool isFactor(int N, int x){
  if (N % x == 0){
    return true;
  }
  return false;
}

int main(){
  int N, i, power, pos;
  bool isPrime;
  std::cin >> N;
  i = 2;
  pos = 0;
  while (N > 1){
    isPrime = false;
    power = 0;
    if (isFactor(N, i)){
      pos++;
      isPrime = true;
    }
    if (isPrime){
      while (N % i == 0){
        N /= i;
        power++;
      }
      if (pos > 1){
        std::cout << " x ";
      }
      if (power > 1){
        std::cout << i << "^" << power;
      }
      else{
        std::cout << i;
      }
    }
    i++;
  }
  return 0;
}
