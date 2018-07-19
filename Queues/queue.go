package main

import "fmt"

type Queue interface {
	Enqueue(interface {}) error
	Dequeue()(interface,error)
	Head() (interface{}, error)
	len() int
}
type FIFO struct{
	s []interface{} //slice of interfaces,any data type can be accepted
}
func NewFIFO() *FIFO { //allocated a slice and returns pointer to that slice
	f :=new(FIFO)
	f.s = make([]interface{}, 0)
	return f
	
}
func (e *FIFO) Enqueue(i interface{}) error {
	e.s = append(e.s, i)
	return nil
}
func (e *FIFO) Dequeue() (interface{}, error) {
	if e.len() == 0 {
		return nil, &QError("Queue is empty")
	}
	v := e.s[0]
	e.s[0] = nil //prevents memory leak
	e.s = e.s[1:]
	return v, nil
}
func (e FIFO) Len() int {
	return len(e.s)
}
func (e *FIFO) Head() (interface{}, error) {
	if e.len() == 0 {
		return nil, &QError("Queue is empty")
	}

	return e.s[0], nil

}
func main() {
	f := FIFO{"hello"}
	fmt.Printf(f)
	
}