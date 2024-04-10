package main

import (
	"fmt"

	"myproject/mymath"
)

// If we just run the main.go file, then we'll not be able to access the content of greetings.go file
// We have to run both of them like: go run main.go greetings.go

var points = 160

// Variables inside function can only be used inside that particular function
func main() {
	fmt.Println(professors)
	greet("Albus Percival Wulfric Brian Dumbledore")
	showPoints()
	fmt.Println(mymath.Add(2, 3))
}
