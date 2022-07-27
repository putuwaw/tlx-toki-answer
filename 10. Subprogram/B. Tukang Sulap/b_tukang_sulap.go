package main

import (
  "fmt"
)

func swap(a *int, b *int) {
  *a, *b = *b, *a
}

func main() {
  var N, T, x, y, p1, q1 int
  var arr [2][1001]int
  var P, Q string
  fmt.Scanln(&N)
  for i := 0; i < 2; i++ {
    for j := 0; j < N; j++ {
      if j < N-1 {
        fmt.Scan(&arr[i][j])
      } else {
        fmt.Scanln(&arr[i][j])
      }
    }
  }
  fmt.Scanln(&T)
  for _ = 0; T > 0; T-- {
    fmt.Scan(&P, &x, &Q, &y)
    x -= 1
    y -= 1
    p1 = int(P[0] - 'A')
    q1 = int(Q[0] - 'A')
    swap(&arr[p1][x], &arr[q1][y])
  }
  for i := 0; i < 2; i++ {
    for j := 0; j < N; j++ {
      fmt.Print(arr[i][j], " ")
    }
    fmt.Println()
  }
}
