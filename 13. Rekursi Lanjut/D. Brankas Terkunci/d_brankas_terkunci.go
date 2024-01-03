package main

import (
	"fmt"
)

var save []int
var isVisited []bool
var N, K int

func draw(depth int) {
	if depth >= K-1 {
		for i := 0; i < K; i++ {
			fmt.Print(save[i]+1, " ")
		}
		fmt.Println()
	} else {
		for i := save[depth] + 1; i < N; i++ {
			if !isVisited[i] {
				isVisited[i] = true
				save[depth+1] = i
				draw(depth + 1)
				isVisited[i] = false

			}
		}
	}
}
func main() {
	save = make([]int, 17)
	isVisited = make([]bool, 17)

	fmt.Scan(&N, &K)
	for i := 0; i < N; i++ {
		save[0] = i
		draw(0)
	}
}
