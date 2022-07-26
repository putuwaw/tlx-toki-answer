#include <iostream>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int N, T, x, y, p1, q1;
  char P, Q, space;
  std::cin >> N;
  int arr[2][N];
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < N; j++){
      std::cin >> arr[i][j];
    }
  }
  std::cin >> T;
  for (int i = 0; i < T; i++){
    std::cin >> P >> x >> Q >> y;
    p1 = P - 'A';
    q1 = Q - 'A';
    x--;
    y--;
    swap(&arr[p1][x], &arr[q1][y]);
  }
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < N; j++){
      std::cout << arr[i][j];
      if (j < N - 1){
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
