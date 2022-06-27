package main

import (
  "fmt"
)

func main() {
  var N, B, res int
  fmt.Scanln(&N)
  res = 0
  for i := 0; i < N; i++ {
    fmt.Scanf("%d", &B)
    res = res + B
  }
  fmt.Println(res)
}
