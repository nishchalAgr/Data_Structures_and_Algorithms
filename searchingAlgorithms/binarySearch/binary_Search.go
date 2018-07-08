package main

import "fmt"
		

func main() {
	
//Implementing binarySearch

	arr := []int{0,2,4,5,6,8}

	var result int = binarySearch(arr,0,len(arr)-1,8) //arguments : array,smallest index,largest index,value to be searched

	if result==-1 {
		fmt.Println("Element not present")
	}else{
		fmt.Println("Element present at index: ",result);
	}
}


func binarySearch(arr []int,l int, r int, x int) int {

	if r>=l {
		var mid int = l+(r-l)/2 
			if arr[mid]==x {
				return mid
			}
			if arr[mid]<x {
				return binarySearch(arr, mid+1, r, x)
			}

		return binarySearch(arr, l, mid-1, x)
	}
	return -1	
}
