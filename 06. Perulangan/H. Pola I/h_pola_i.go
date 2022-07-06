package main

import (
  "fmt"
)

func main() {
  var N, K int
  fmt.Scanf("%d %d", &N, &K)
  for i := 1; i <= N; i++ {
    if i%K == 0 {
      fmt.Printf("*")
    } else {
      fmt.Print(i)
    }
    if i != N {
      fmt.Print(" ")
    } else {
      fmt.Println()
    }
  }
}
