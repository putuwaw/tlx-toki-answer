#include <iostream>

int fx(int A, int B, int x){
  return abs(A * x + B);
}

int main(){
  int A, B, K, x;
  std::cin >> A >> B >> K >> x;
  while (K--){
    x = fx(A, B, x);
  }
  std::cout << x << std::endl;
  return 0;
}
