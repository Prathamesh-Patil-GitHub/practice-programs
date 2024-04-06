// Below line states that main.go is a go file which is a part of package main
// Mentioning package as main tells the go compiler to create an executable file for the program
// If we choose the build the program

package main

// Package for formatting string and printing messages to console
import "fmt"

// func main is the entry point for the application
// We can only have one main function in the main package
// Even if there are multiple files in main package, we only create one main function in any one file
func main() {
	fmt.Println("Hello World in GO by Pro!")
}
