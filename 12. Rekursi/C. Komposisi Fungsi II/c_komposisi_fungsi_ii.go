package main

import (
	"fmt"
	"math"
)

func fx(A int, B int, K int, x int) int {
	if K == 1 {
		return int(math.Abs(float64(A*x + B)))
	} else {
		return int(math.Abs(float64(A*fx(A, B, K-1, x) + B)))
	}
}

func main() {
	var A, B, K, x int
	fmt.Scan(&A, &B, &K, &x)
	fmt.Println(fx(A, B, K, x))
}
