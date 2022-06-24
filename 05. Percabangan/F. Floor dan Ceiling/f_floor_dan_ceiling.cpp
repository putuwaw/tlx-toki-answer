#include <iostream>
#include <cmath>
int main(){
  double N;
  std::cin >> N;
  if (N >= 0){
    if (N > trunc(N))
      std::cout << trunc(N) << " " << trunc(N) + 1 << std::endl;
    else
      std::cout << N << " " << N << std::endl;
  }
  else{
    if (N < trunc(N))
      std::cout << trunc(N) - 1 << " " << trunc(N) << std::endl;
    else
      std::cout << N << " " << N << std::endl;
  }
  return 0;
}
