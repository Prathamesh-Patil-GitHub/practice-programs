package main

// Any functions, variable or any entity of this file would be available
// to any other file with the same package "main"

import "fmt"

var professors = []string{"Severus Snape", "Minerva McGonagall", "Horace Slughorn"}

func greet(name string) {
	fmt.Println("Hello", name)
}

func showPoints() {
	fmt.Println("Your house has this many points:", points)
}
