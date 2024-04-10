package main

import (
	"fmt"
	"math"
	"strings"
)

// Syntax of declaring a function:
// func func_name(param_name1 param_type, param_name2 param_type, ...) return_type{
//
// }

// Simple function with single argument
func greet(name string) {
	fmt.Printf("Good Morning %v \n", name)
}

// Simple function with single argument
func sayBye(name string) {
	fmt.Printf("Good Bye %v \n", name)
}

// Multiple argument function, which takes a slice and a function as a parameter
func cycleNames(names []string, funVar func(string)) {
	for _, name := range names {
		funVar(name)
	}
}

// A fuction with return statement
func circleArea(radius float64) float64 {
	return (math.Pi * radius * radius)
}

// We can also create functions which can return multiple values
// Here, it is not handled like Python does, for ex: creating a tuple of the return values
// In Go, all the values are returned separately, just like taking multiple parameters
func getInitials(name string) (string, string) {
	s := strings.ToUpper(name)
	names := strings.Split(s, " ")
	if len(names) > 1 {
		return names[0][:1], names[1][:1]
	}
	return names[0][:1], "_"
}

func main() {

	// Calling all the created functions
	greet("Meow")
	sayBye("Meow")

	fmt.Println("\nPassing a slice and a function as parameters")
	names := []string{"Spidey", "Captain", "Iron-Man"}
	cycleNames(names, greet)
	cycleNames(names, sayBye)

	fmt.Println("\nUsing a function with return type")
	area1 := circleArea(10)
	fmt.Printf("Area of a circle with radius 10 is %0.2f \n", area1)

	// Using function with multiple return values
	fn1, sn1 := getInitials("Lord Voldemort")
	fmt.Println(fn1, sn1)

	fn2, sn2 := getInitials("Harry Potter")
	fmt.Println(fn2, sn2)

	fn3, sn3 := getInitials("Dobby")
	fmt.Println(fn3, sn3)
}
