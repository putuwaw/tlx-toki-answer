package main

import (
  "fmt"
)

func main() {
  var N int
  counter := 0
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    for j := 0; j < i+1; j++ {
      fmt.Print(counter % 10)
      counter++
    }
    fmt.Println()
  }
}
