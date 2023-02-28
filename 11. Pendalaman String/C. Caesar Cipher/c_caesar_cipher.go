package main

import "fmt"

func main() {
    var S string
    var K int
    fmt.Scan(&S, &K)
    for i := 0; i < len(S); i++ {
        fmt.Print(string((int(S[i]) + K - int('a')) % 26 + int('a')))
    }
    fmt.Println();
}
