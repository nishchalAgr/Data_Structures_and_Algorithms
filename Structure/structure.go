package main

import "fmt"

type Employee struct {
	fname,lname string
	age,salary int
}

func main() {

	emp1 := Employee { "Ankit", "Agrwal", 21, 500}
	emp2 := Employee { "james", "bond", 29, 5090}


	fmt.Println("Employee 1: ", emp1) //printing a struct
	
	fmt.Println("First Name:", emp1.fname)//accessing individual field
    fmt.Println("Last Name:", emp1.lname)
    fmt.Println("Age:", emp1.age)
    fmt.Println("Salary: $%d", emp1.salary)


    fmt.Println("Employee 2: ", emp2)

    fmt.Println("First Name:", emp2.fname)
    fmt.Println("Last Name:", emp2.lname)
    fmt.Println("Age:", emp2.age)
    fmt.Println("Salary: $%d", emp2.salary)

    emp3:=&Employee{"optimus","prime",100,8000} //Pointers to structure
    fmt.Println(*emp3)
    fmt.Println("First name: ",emp3.fname)
    fmt.Println("Age: ",emp3.age)
}