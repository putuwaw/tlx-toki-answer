package main

import (
  "fmt"
)

func main() {
  var N int
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    for j := 0; j < N; j++ {
      if j < N-i-1 {
        fmt.Print(" ")
      } else {
        fmt.Print("*")
      }
    }
    fmt.Println()
  }
}
