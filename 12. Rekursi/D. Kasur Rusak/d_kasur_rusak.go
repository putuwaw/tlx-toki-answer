package main

import (
	"fmt"
	"bufio"
	"os"
)

func palindrome(S string) bool{
	length := len([]rune(S))
	if length == 1{
		return true
	}else if length == 2{
		return S[0] == S[1]
	}else{
		return S[0] == S[length-1] && palindrome(S[1:length-1])
	}
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	if palindrome(scanner.Text()) {
		fmt.Println("YA")
	} else {
		fmt.Println("BUKAN")
	}
}
