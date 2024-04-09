package main

import "fmt"

func main() {
	// GO only has 'for' keyword
	// There's no 'while' keyword, but we can implement while loops by using 'for' keyword

	// while loop - Using for keyword
	fmt.Println("Using While Loop")
	x := 0
	for x < 5 {
		fmt.Println("Value of x is:", x)
		x++
	}

	fmt.Println("\nUsing For Loop")
	// for loop - Using for keyword
	for i := 0; i < 5; i++ {
		fmt.Println("Value of x is:", i)
	}

	// Using for for printing elements of a slice
	names := []string{"Spidey", "Captain", "Iron-Man", "Thor", "Loki"}
	fmt.Println("\nUsing 'for' for printing elements of a slice")
	for i := 0; i < len(names); i++ {
		fmt.Println(names[i])
	}

	// Using for with range - to get index and value
	fmt.Println("\nUsing 'for' with range")
	for index, value := range names {
		fmt.Printf("The value at index %v is %v \n", index, value)
	}

	// Using for with range - to get only value
	fmt.Println("\nUsing for with range - to get only value")
	// Use _ if you don't want to use the value of a variable, because in go it is required to use a variable at least once
	// if it is declared, but we can avoid this problem by using an _ (Underscore) as the variable name
	for _, value := range names {
		fmt.Printf("The value is %v \n", value)
	}
}
