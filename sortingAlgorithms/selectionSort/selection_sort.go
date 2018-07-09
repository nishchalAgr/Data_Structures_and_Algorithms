package main

import "fmt"

var arr = []int{5,8,6,9,4,7}

func main(){

	selectionsort(arr)
	fmt.Println(arr)
}


func selectionsort(arr []int) {
	
 	var minvalueidex int = 0

 	for j := 0; j < len(arr)-1; j++ {

 		for i := minvalueidex+1; i < len(arr)-1; i++ {
 		if arr[i]<arr[minvalueidex] {
 			var temp int = arr[i]
 				arr[i]=arr[minvalueidex]
 				arr[minvalueidex]=temp
 				minvalueidex++
 			}
		
 		}
 	}
 }


