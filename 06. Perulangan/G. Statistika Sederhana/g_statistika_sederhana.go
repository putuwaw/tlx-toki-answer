package main

import (
  "fmt"
)

func main() {
  var N, num, A, B int
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    fmt.Scan(&num)
    if i == 0 {
      A = num
      B = num
    } else {
      if num > A {
        A = num
      }
      if num < B {
        B = num
      }
    }
  }
  fmt.Println(A, B)
}
