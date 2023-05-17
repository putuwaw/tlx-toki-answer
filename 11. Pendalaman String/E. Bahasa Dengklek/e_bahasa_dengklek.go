package main

import (
	"fmt"
)

func main() {
	var S string
	fmt.Scan(&S)
	for _, char := range S {
		fmt.Printf("%c", int(char)^32)
	}
}
