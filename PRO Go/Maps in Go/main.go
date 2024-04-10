package main

import "fmt"

func main() {
	// Syntax of creating map:
	// map_name := map[key_type]val_type{
	// 	key1: value1,
	// 	key2: value2,
	// 	...
	// }

	menu := map[string]float64{
		"Soup":   45.99,
		"Cutlet": 9.99,
		"Curry":  20.99,
		"Bread":  5.99, // Final comma is necessary
	}

	menu["Water"] = 2.99

	fmt.Println(menu)
	fmt.Println(menu["Soup"])
	// fmt.Println(menu["meow"]) // As "meow" key is not present in the map, it will print 0, default value of float64
	// When the key is not present in the map, it returns default value of the value_type

	// Looping through maps
	for k, v := range menu {
		fmt.Printf("%v \t ... %v$ \n", k, v)
	}

	// Looping through keys
	for k := range menu {
		fmt.Println(k)
	}

	// Clearing the whole menu
	for k := range menu {
		delete(menu, k)
	}

	fmt.Println(menu)
}
