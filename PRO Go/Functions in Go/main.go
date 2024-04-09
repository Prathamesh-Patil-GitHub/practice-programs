package main

import (
	"fmt"
	"math"
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

func main() {

	// Calling all the created functions
	greet("Meow")
	sayBye("Meow")

	fmt.Println("\nPassing a slice and a function as parameters")
	names := []string{"Spidey", "Captain", "Iron-Man"}
	cycleNames(names, greet)
	cycleNames(names, sayBye)

	area1 := circleArea(10)
	fmt.Printf("Area of a circle with radius 10 is %0.2f", area1)
}
