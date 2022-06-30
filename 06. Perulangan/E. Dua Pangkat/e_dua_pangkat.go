package main

import (
  "fmt"
)

func main() {
  var N int32
  fmt.Scan(&N)
  for {
    if (N % 2) == 0 {
      N = N / 2
    } else {
      break
    }
  }
  if N == 1 {
    fmt.Println("ya")
  } else {
    fmt.Println("bukan")
  }
}
