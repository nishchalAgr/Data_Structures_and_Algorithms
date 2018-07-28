package main

import "fmt"

const MAX = 8

var front int = -1
var rear int = -1

var Queue [MAX]int

func main() {
	enqueue(5)
	enqueue(8)
	enqueue(0)
	enqueue(1)

	fmt.Println(Queue)

	dequeue()

	fmt.Println(Queue)
	dequeue()

	fmt.Println(Queue)



}

func enqueue(val int) {
	if rear==MAX-1 {
		fmt.Println("Queue Overflow!")
	}
	if front==-1 {
		front = 0
	}
	rear++
	Queue[rear] = val

}

func dequeue() {
	if front==MAX-1{
		fmt.Println("Queue UnderFlow!")
	}

	fmt.Println("Item dequeued ",Queue[front])

	front++
}