#include <iostream>
int main(){
  int N, M, P, i, j, k;
  std::cin >> N >> M >> P;
  int A[N][M], B[M][P], C[N][P];
  for (i = 0; i < N; i++){
    for (j = 0; j < M; j++){
      std::cin >> A[i][j];
    }
  }
  for (i = 0; i < M; i++){
    for (j = 0; j < P; j++){
      std::cin >> B[i][j];
    }
  }
  for (i = 0; i < N; i++){
    for (j = 0; j < P; j++){
      C[i][j] = 0;
      for (k = 0; k < M; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
      std::cout << C[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
