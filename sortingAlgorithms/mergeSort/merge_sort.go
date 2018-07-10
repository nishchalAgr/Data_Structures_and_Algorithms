package main

import "fmt"

var arr = []int{5,8,6,9,4,7}
var brr [6]int

func main() {
   
mergesort(0,len(arr)-1)
fmt.Println(brr)

}

func mergesort(low int,high int) {
	var mid int
	if low<high {
		mid =(low+high)/2
		mergesort(low,mid)
		mergesort(mid+1,high)
		merge(low,mid,high)
	}else{
		return
	}
}

func merge(low int,mid int, high int) {

	 var l1, l2,i int
	 l1 = low
	 l2 = mid + 1

   for i = low; l1 <= mid && l2 <= high; i++  {
      
      if arr[l1] <= arr[l2] {
         brr[i] = arr[l1]
         l1++
      }else{
         brr[i] = arr[l2]
         l2++
      }
   }
   
   for l1 <= mid {
   	brr[i] = arr[l1]
      i++
      l1++
   }   
   
   for l2 <= high {
      brr[i] = arr[l2]
      i++
      l2++
   }

   for i = low; i <= high; i++ {
      arr[i] = brr[i]
   }
}