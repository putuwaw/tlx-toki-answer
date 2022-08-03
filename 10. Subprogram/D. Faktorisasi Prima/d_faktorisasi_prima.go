package main

import (
  "fmt"
)

func isFactor(N int, x int) bool {
  if N%x == 0 {
    return true
  }
  return false
}

func main() {
  var N int
  fmt.Scan(&N)
  i := 2
  pos := 0
  for N > 1 {
    power := 0
    if isFactor(N, i) {
      pos += 1
      for N%i == 0 {
        N /= i
        power += 1
      }
      if pos > 1 {
        fmt.Print(" x ")
      }
      fmt.Print(i)
      if power > 1 {
        fmt.Printf("^%d", power)
      }
    }
    i += 1
  }
}
