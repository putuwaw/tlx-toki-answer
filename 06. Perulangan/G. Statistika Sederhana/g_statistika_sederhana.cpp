#include <iostream>
int main(){
  int N, num, A, B;
  std::cin >> N;
  for (int i = 0; i < N; i++){
    std::cin >> num;
    if (i == 0){
      A = num;
      B = num;
    }
    else {
      if (num > A){
        A = num;
      }
      if (num < B){
        B = num;
      }
    }
  }
  std::cout << A << " " << B << std::endl;
  return 0;
}
