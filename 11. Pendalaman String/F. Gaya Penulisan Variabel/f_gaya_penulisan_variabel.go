package main

import (
	"fmt"
)

func main() {
	var S string
	isBool := false
	fmt.Scan(&S)
	for _, char := range S {
		if (isBool){
			fmt.Printf("%c", int(char)^32)
			isBool = false
		} else if (char >= 'A' && char <= 'Z'){
			fmt.Printf("_%c", int(char)^32)
		} else if (char == '_'){
			isBool = true
		} else {
			fmt.Printf("%c", char)
		}
	}
	fmt.Println()
}
