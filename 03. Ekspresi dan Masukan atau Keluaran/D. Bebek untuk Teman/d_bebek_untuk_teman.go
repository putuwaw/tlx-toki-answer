package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	fmt.Printf("masing-masing %d \n", a/b)
	fmt.Printf("bersisa %d \n", a%b)
}
