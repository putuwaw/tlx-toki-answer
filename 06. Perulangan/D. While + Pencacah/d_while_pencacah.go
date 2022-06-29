package main

import (
  "fmt"
)

func main() {
  var num, res int32
  res = 0
  for {
    _, err := fmt.Scanf("%d", &num)
    if err != nil {
      break
    }
    res += num
  }
  fmt.Println(res)
}
