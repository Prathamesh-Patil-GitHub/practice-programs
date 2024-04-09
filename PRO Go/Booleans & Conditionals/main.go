package main

import "fmt"

func main() {
	age := 50

	// fmt.Println(age <= 50) // true
	// fmt.Println(age >= 50) // false
	// fmt.Println(age == 45) // true
	// fmt.Println(age != 50) // true

	if age < 30 {
		fmt.Println("Age is less than 30")
	} else if age < 40 { // We cannot write the else on a new line
		fmt.Println("Age is less than 40")
	} else { // We have to write the else after closing curly brace
		fmt.Println("Age is not less than 40")
	}

	names := []string{"Spidey", "Captain", "Iron-Man", "Thor", "Loki"}

	for index, value := range names {
		if index == 1 {
			fmt.Println("Continuing at pos", index)
			continue
		} else if index == 3 {
			fmt.Println("Breaking at pos", index)
			break
		}
		fmt.Printf("The value at pos %v is %v \n", index, value)
	}

}
