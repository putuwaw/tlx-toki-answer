package main

import (
	"fmt"
)

func main() {
	var a, b, c, d, e, f, g, h, i uint
	fmt.Scanln(&a, &b, &c)
	fmt.Scanln(&d, &e, &f)
	fmt.Scanln(&g, &h, &i)
	fmt.Printf("%d %d %d\n%d %d %d\n%d %d %d\n", a, d, g, b, e, h, c, f, i)
}
