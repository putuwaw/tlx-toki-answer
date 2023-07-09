package main

import (
	"fmt"
)

func factorial_gg(N int) int{
	if N == 1{
		return 1
	} else if N % 2 == 0{
		return N / 2 * factorial_gg(N-1)
	} else{
		return N * factorial_gg(N-1)
	}
}

func main() {
	var N int
	fmt.Scan(&N)
	fmt.Println(factorial_gg(N))
}
