#include <iostream>
int main(){
  int N;
  std::cin >> N;
  for (int i = 1; i <= N; i++){
    if (i % 10 == 0){
      continue;
    }
    else if (i == 42){
      std::cout << "ERROR" << std::endl;
      break;
    }
    else{
      std::cout << i << std::endl;
    }
  }
  return 0;
}
