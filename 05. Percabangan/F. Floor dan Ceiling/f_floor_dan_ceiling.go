package main

import (
  "fmt"
  "math"
)

func main() {
  var N float64
  fmt.Scanf("%f", &N)
  if N >= 0 {
    if N > math.Trunc(N) {
      fmt.Printf("%.0f %.0f\n", math.Trunc(N), math.Trunc(N)+1)
    } else {
      fmt.Printf("%.0f %.0f\n", N, N)
    }
  } else {
    if N < math.Trunc((N)) {
      fmt.Printf("%.0f %.0f\n", math.Trunc(N)-1, math.Trunc(N))
    } else {
      fmt.Printf("%.0f %.0f\n", N, N)
    }
  }
}
