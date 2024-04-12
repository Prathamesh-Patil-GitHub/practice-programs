package main

import "fmt"

func main() {

	age := 25
	name := "Spidey"

	// Print - Doesn't add a new line to the end
	fmt.Print("Trying out Print function\n")
	fmt.Print("Hello, ")
	fmt.Print("world!\n")
	fmt.Print("New line\n")

	// Println
	fmt.Println("\nTrying out Println function")
	fmt.Println("Meow 😽")
	fmt.Println("Meow Meow 😽")
	fmt.Println("My name is", name, "and my age is", age)

	// Printf - Formatted String - %_ is a format specifier
	fmt.Printf("\nTrying out Printf function \n")
	fmt.Printf("My age is %v and my name is %v \n", age, name)
	// %q adds quotes to strings in formatted string
	fmt.Printf("My age is %q and my name is %q \n", age, name)
	// %T gives type of variable
	fmt.Printf("Age is of type %T \n", age)
	// %f for floats
	fmt.Printf("You score %f points! \n", 225.25)
	// Limiting floating point precision - default is 6
	fmt.Printf("You score %0.1f points! \n", 225.25)

	// Sprintf (Saves formatted string)
	fmt.Println("Playing with Sprintf")
	var str = fmt.Sprintf("My age is %v and my name is %v \n", age, name)
	fmt.Println("The saved string is:", str)
}
