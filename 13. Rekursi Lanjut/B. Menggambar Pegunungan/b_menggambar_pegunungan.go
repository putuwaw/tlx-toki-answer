package main

import (
	"fmt"
)

func draw(N int) {
	if N == 1 {
		fmt.Println("*")
	} else {
		draw(N - 1)
		for i := 0; i < N; i++ {
			fmt.Print("*")
		}
		fmt.Println()
		draw(N - 1)
	}
}
func main() {
	var N int
	fmt.Scan(&N)
	draw(N)
}
