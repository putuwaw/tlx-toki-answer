package main

import (
	"fmt"
)

var save []int
var isVisited []bool
var N int

func write(depth int) {
	if depth > N {
		isZigZag := true
		if N >= 3 {
			for i := 2; i < N; i++ {
				h := save[i] > save[i-1] && save[i] > save[i+1]
				l := save[i] < save[i-1] && save[i] < save[i+1]
				if !(h || l) {
					isZigZag = false
					break
				}
			}
		}
		if N < 3 || isZigZag {
			for i := 1; i <= N; i++ {
				fmt.Print(save[i])
			}
			fmt.Println()
		}

	} else {
		for i := 1; i <= N; i++ {
			if !isVisited[i] {
				isVisited[i] = true
				save[depth] = i
				write(depth + 1)
				isVisited[i] = false

			}
		}
	}
}
func main() {
	save = make([]int, 17)
	isVisited = make([]bool, 17)
	fmt.Scan(&N)
	write(1)
}
