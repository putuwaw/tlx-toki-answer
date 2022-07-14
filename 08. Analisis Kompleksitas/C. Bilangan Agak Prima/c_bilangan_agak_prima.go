package main

import (
  "fmt"
)

func main() {
  var N, num int
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    fmt.Scan(&num)
    factor := 0
    for j := 1; j <= num; j++ {
      if num%j == 0 {
        factor += 1
      }
      if factor > 4 {
        break
      }
    }
    if factor <= 4 {
      fmt.Println("YA")
    } else {
      fmt.Println("BUKAN")
    }
  }
}
