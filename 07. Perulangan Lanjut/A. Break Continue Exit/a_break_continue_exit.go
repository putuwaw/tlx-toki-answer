package main

import (
  "fmt"
)

func main() {
  var N int
  fmt.Scan(&N)
  for i := 1; i <= N; i++ {
    if i%10 == 0 {
      continue
    } else if i == 42 {
      fmt.Println("ERROR")
      break
    } else {
      fmt.Println(i)
    }
  }
}
