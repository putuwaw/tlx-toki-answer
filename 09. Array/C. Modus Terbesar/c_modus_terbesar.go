package main

import (
  "fmt"
)

func main() {
  var N, ans int
  var arr [1001]int
  fmt.Scan(&N)
  for i := 0; i < N; i++ {
    var num int
    fmt.Scan(&num)
    arr[num] += 1
  }
  ans = 0
  for i := 0; i < 1001; i++ {
    if arr[i] >= arr[ans] {
      ans = i
    }
  }
  fmt.Println(ans)
}
