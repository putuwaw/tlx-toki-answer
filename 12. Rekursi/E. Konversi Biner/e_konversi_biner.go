package main

import (
	"fmt"
)

func biner(N int) {
	if N == 1 {
		fmt.Print(1)
	} else {
		biner(N / 2)
		fmt.Print(N % 2)
	}
}
func main() {
	var N int
	fmt.Scan(&N)
	biner(N)
}
