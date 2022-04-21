package main

import (
	"fmt"
)

func main() {
	var A, T int
	fmt.Scanf("%d %d", &A, &T)
	fmt.Printf("%.2f", float32(A*T)/2)
}
