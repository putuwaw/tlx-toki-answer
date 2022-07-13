package main

import (
  "fmt"
)

func main() {
  var N, num int
  var isPrime bool
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    fmt.Scan(&num)
    isPrime = true
    if num == 1 {
      isPrime = false
    } else {
      for j := 2; j*j <= num; j++ {
        if num%j == 0 {
          isPrime = false
          break
        }
      }
    }
    if isPrime {
      fmt.Println("YA")
    } else {
      fmt.Println("BUKAN")
    }
  }
}
