package main

import "fmt"
		

func main() {

	arr := []int{0,2,4,5,6,8}

	linearSearch(arr,6)
}

func linearSearch(arr []int, num int){
	var key int = num
	var found bool = false
	var index int = 0
	
	for i := 0; i < len(arr); i++ {
		if arr[i]==key {
			found = true
			index = i
		}
	}
	
	if found==true {
		fmt.Println("found!")
		fmt.Printf("Element found at Index:%d", index)
	}else{
		fmt.Printf("Element notfound")
	}
}


