package main

import (
  "fmt"
)

func main() {
  var str string
  for {
    _, err := fmt.Scanf("%s", &str)
    if err != nil {
      break
    }
    fmt.Println(str)
  }
}
