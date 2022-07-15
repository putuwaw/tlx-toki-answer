package main

import(
    "fmt"
)
func main(){
    var arr[101]int
    idx := 0
    for{
        _, err := fmt.Scan(&arr[idx])
        if (err != nil){
            break
        }
        idx += 1
    }
    for i := idx-1; i >= 0; i--{
        fmt.Println(arr[i])
    }
}
