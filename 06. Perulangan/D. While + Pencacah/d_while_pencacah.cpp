#include <iostream>
int main(){
  int num, res;
  res = 0;
  while (std::cin >> num){
    res += num;
  }
  std::cout << res << std::endl;
  return 0;
}
