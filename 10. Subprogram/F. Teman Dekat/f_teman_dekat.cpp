#include <iostream>

int power(int base, int exp){
  int res = base;
  while (exp > 1){
    res *= base;
    exp--;
  }
  return res;
}

int main(){
  int N, D, i, j, res, min, max;
  std::cin >> N >> D;
  int T[N][2];
  for (i = 0; i < N; i++)
    for (j = 0; j < 2; j++)
      std::cin >> T[i][j];

  for (i = 0; i < (N - 1); i++){
    for (j = i + 1; j < N; j++){
      res = power(abs(T[j][0] - T[i][0]), D) + power(abs(T[j][1] - T[i][1]), D);
      if (i == 0 && j == 1){
        min = max = res;
      }
      else{
        if (res < min) min = res;
        if (res > max) max = res;
      }
    }
  }
  std::cout << min << " " << max << std::endl;
  return 0;
}
