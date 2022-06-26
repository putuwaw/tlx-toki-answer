package main

import (
  "fmt"
)

func main() {
  var x1, y1, x2, y2 int32
  fmt.Scanf("%d %d %d %d", &x1, &y1, &x2, &y2)
  x1 = x1 - x2
  y1 = y1 - y2
  if x1 < 0 {
    x1 = x1 * -1
  }
  if y1 < 0 {
    y1 = y1 * -1
  }
  fmt.Println(x1 + y1)
}
