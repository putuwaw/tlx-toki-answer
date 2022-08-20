package main

import (
  "fmt"
  "strings"
)

func main() {
  var S, T string
  fmt.Scan(&S, &T)
  for strings.Contains(S, T) {
    S = strings.ReplaceAll(S, T, "")
  }
  fmt.Println(S)
}
