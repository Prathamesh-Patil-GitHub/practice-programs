package main

import "fmt"

func updateName(n string) {
	n = "Iron Man"
}

func addName(houseMap map[string]string, name string, house string) {
	houseMap[name] = house
}

// Go passes variables to functions, in a pass by value manner.

func main() {
	// Group 1 - string, int, float, boolean, array, bool, array, struct
	// Group 1 variables are passed as pass by value, the value of "actual parameter"
	// is copied in the formal parameter
	name := "Captain"
	updateName(name) // This function will not change the value of name
	fmt.Println(name)

	// Group 2 - slice, map, function
	// Group 2 variables are passed by reference as the variable is name is basically a pointer to the object
	// So when we pass a slice in a function call, any changes made to the slice in the function
	// are reflected in the original slice, because a pointer to the slice is passed in the function call

	var houseMap = map[string]string{
		"Harry": "Gryffindor",
		"Draco": "Slytherin",
	}
	addName(houseMap, "Hermione", "Gryffindor") // This function will change the map
	fmt.Println(houseMap)
}
