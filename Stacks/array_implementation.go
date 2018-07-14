package main

import "fmt"

const MAX=10

var top int = -1

var stack [MAX]int

func main() {
	ins(5)
	ins(9)
	ins(7)
	ins(58)
	ins(91)
	ins(32)
	dis()
	pop()
	dis()
}

func ins(val int) {
	if top>=MAX-1 {
		fmt.Println("Stack Overflow")
	}

	top++
	stack[top]=val
}

func pop() {
	if top==-1 {
		fmt.Println("StackUnderFlow!")
	}
	fmt.Println("Item popped out is",stack[top])
	top--s
}
func dis() {
	if top==-1 {
		fmt.Printf("Stack is empty")
	}
	for i := top; i >= 0; i-- {
		fmt.Println(stack[i])
	}
}