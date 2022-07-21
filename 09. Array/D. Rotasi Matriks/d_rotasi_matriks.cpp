#include <iostream>
int main(){
  int N, M;
  std::cin >> N >> M;
  int arr[N][M];
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      std::cin >> arr[i][j];
    }
  }
  for (int i = 0; i < M; i++){
    for (int j = (N - 1); j >= 0; j--){
      std::cout << arr[j][i];
      if (j > 0)
      std::cout << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
