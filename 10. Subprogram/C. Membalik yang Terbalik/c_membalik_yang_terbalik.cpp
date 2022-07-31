#include <iostream>

int reverse(int x){
  int res = 0;
  while (x > 0){
    res = res * 10 + x % 10;
    x /= 10;
  }
  return res;
}

int main(){
  int A, B;
  std::cin >> A >> B;
  std::cout << reverse(reverse(A) + reverse(B));
  return 0;
}
