package main

import "fmt"

var arr = []int{5,8,6,9,4,7}

func main() {
	
	bubblesort(arr)
	fmt.Println(arr)


	

}

func bubblesort(arr []int){

	var i,j,n int
	var swapped bool
	n = len(arr)
	for i = 0; i < n-1; i++ {
		swapped = false
		for j = 0; j < n-i-1; j++ {
			if arr[j]>arr[j+1] {
				var temp int = arr[j]
				arr[j]=arr[j+1]
				arr[j+1]=temp
				swapped = true
			}
			
		}
		if swapped==false {
			break
			
		}
		
	}
}



