package main

import (
	"fmt"
)

func main() {
	var N int
	fmt.Scanf("%d", &N)
	if N > 0 {
		fmt.Println("positif")
	} else if N < 0 {
		fmt.Println("negatif")
	} else {
		fmt.Println("nol")
	}
}
