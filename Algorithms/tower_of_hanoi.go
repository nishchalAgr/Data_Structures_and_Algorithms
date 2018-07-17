package main

import "fmt"

func toh(disks int, src string, des string, aux string) {
	if disks>=1 {
		toh(disks-1,src,aux,des)
		fmt.Printf("Disk moved from %s to %s \n",src,des)
		toh(disks-1,aux,des,src)
	}
	
}

func main() {
	fmt.Println("Tower of hanoi algorithm demo: ")
	toh(4,"A","B","C")
}