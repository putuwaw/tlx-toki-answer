package main

import (
	"fmt"
	"strings"
)

func main() {
	var S1 string
	var S2 string
	var S3 string
	var S4 string
	fmt.Scan(&S1)
	fmt.Scan(&S2)
	fmt.Scan(&S3)
	fmt.Scan(&S4)

	S1 = strings.ReplaceAll(S1, S2, "")
	pos := strings.Index(S1, S3)
	S1 = S1[:pos+len(S3)] + S4 + S1[pos+len(S3):]
	fmt.Println(S1)

}
