package main

import "fmt"

var arr = []int{5,3,9,7,4,2,8}

func main() {

	fmt.Println("Before Sorting: ",arr)
	insertionsort(arr)
	fmt.Println("After Sorting: ",arr)
}

func insertionsort(arr []int) {
	var valuetoinsert,holeposition int

	for i := 0; i < len(arr); i++ {
		valuetoinsert=arr[i]
		holeposition=i

		for holeposition>0 && arr[holeposition-1]>valuetoinsert {
			arr[holeposition] = arr[holeposition-1]
			holeposition--		
		}

		if holeposition!=i {
			arr[holeposition]=valuetoinsert
		}
	}
	
	
}