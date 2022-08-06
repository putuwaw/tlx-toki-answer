package main

import (
  "fmt"
  "math"
)

func fx(A, B, x int) int {
  return int(math.Abs(float64(A*x + B)))
}

func main() {
  var A, B, K, x int
  fmt.Scan(&A, &B, &K, &x)
  for _ = 0; K > 0; K-- {
    x = fx(A, B, x)
  }
  fmt.Println(x)
}
