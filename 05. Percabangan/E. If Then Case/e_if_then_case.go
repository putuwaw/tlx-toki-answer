package main

import (
	"fmt"
)

func main() {
	var N int
	fmt.Scanf("%d", &N)
	if N > 9999 {
		fmt.Printf("puluhribuan\n")
	} else if N > 999 {
		fmt.Printf("ribuan\n")
	} else if N > 99 {
		fmt.Printf("ratusan\n")
	} else if N > 9 {
		fmt.Printf("puluhan\n")
	} else {
		fmt.Printf("satuan\n")
	}
}
