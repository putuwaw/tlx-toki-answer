package main

import (
  "fmt"
)

func reverse(x int) int {
  rev := 0
  for x > 0 {
    rev = rev * 10 + x % 10
    x /= 10
  }
  return rev
}

func main() {
  var A, B int
  fmt.Scan(&A, &B)
  fmt.Println(reverse(reverse(A) + reverse(B)))
}
