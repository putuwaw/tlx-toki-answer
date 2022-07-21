package main

import (
  "fmt"
)

func main() {
  var N, M int
  fmt.Scanf("%d %d", &N, &M)
  var arr [101][101]int
  for i := 0; i < N; i++ {
    for j := 0; j < M; j++ {
      if j == M-1 {
        fmt.Scanln(&arr[i][j])
      } else {
        fmt.Scan(&arr[i][j])
      }
    }
  }
  for i := 0; i < M; i++ {
    for j := (N - 1); j >= 0; j-- {
      fmt.Print(arr[j][i], " ")
    }
    fmt.Println()
  }
}
