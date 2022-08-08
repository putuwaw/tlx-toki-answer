package main

import (
  "fmt"
  "math"
)

func main() {
  var N, D int
  var T [1001][2]int
  fmt.Scan(&N, &D)
  min := 0
  max := 0
  for i := 0; i < N; i++ {
    for j := 0; j < 2; j++ {
      fmt.Scan(&T[i][j])
    }
  }
  for i := 0; i < (N - 1); i++ {
    for j := i + 1; j < N; j++ {
      res := math.Pow(math.Abs(float64(T[i][0]-T[j][0])), float64(D))
      res += math.Pow(math.Abs(float64(T[i][1]-T[j][1])), float64(D))
      if i == 0 && j == 1 {
        min = int(res)
        max = int(res)
      } else {
        if int(res) < min {
          min = int(res)
        }
        if int(res) > max {
          max = int(res)
        }
      }
    }
  }
  fmt.Println(min, max)
}
