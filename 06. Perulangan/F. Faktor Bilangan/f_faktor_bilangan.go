package main

import (
  "fmt"
)

func main() {
  var N int32
  fmt.Scan(&N)
  for i := N; i > 0; i-- {
    if N%i == 0 {
      fmt.Println(i)
    }
  }
}
