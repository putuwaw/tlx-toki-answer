package main

import (
  "fmt"
)

func main() {
  var N, M, P int
  fmt.Scanf("%d %d %d", &N, &M, &P)
  var A, B, C [101][101]int
  for i := 0; i < N; i++ {
    for j := 0; j < M; j++ {
      fmt.Scan(&A[i][j])
    }
  }
  for i := 0; i < M; i++ {
    for j := 0; j < P; j++ {
      fmt.Scan(&B[i][j])
    }
  }
  for i := 0; i < N; i++ {
    for j := 0; j < P; j++ {
      C[i][j] = 0
      for k := 0; k < M; k++ {
        C[i][j] += A[i][k] * B[k][j]
      }
      fmt.Print(C[i][j], " ")
    }
    fmt.Println()
  }
}
