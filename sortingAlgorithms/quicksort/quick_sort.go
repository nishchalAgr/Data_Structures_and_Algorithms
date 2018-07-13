package main

import "fmt"

var arr = []int{5,8,6,9,4,7}

func main() {

	quicksort(arr,0,len(arr)-1)
	fmt.Println("QuickSort: ",arr)

}

func quicksort(arr []int, p int, r int) {
  	if p<r {
  		var q int = partition(arr,p,r)
  		quicksort(arr,p,q)
  		quicksort(arr,q+1,r)
  	}
}

func partition(arr []int,low int,high int) int { //sub function of quicksort
  	var pivot int = arr[high]
  	var i int = low-1

 	for j := low; j <= high-1; j++ {
 		if arr[j]<=pivot {
 			i++
  			var temp int = arr[i]
				arr[i]=arr[j]
				arr[j]=temp
 		}
 		
  	}
  	var temp2 int = arr[i+1]
	 arr[i+1]=arr[high]
	 arr[high]=temp2

	 return i
}
