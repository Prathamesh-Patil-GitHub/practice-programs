package main

import "fmt"

func main() {
	// ARRAYS
	// var ages [3]int =  [3]int{20, 25, 30}
	// This is a short hand for the above line
	var ages = [3]int{20, 25, 30}

	names := [4]string{"Miles", "Peter", "Spidey", "Big M"}

	ages[2] = 26

	fmt.Println(ages, len(ages))
	fmt.Println(names, len(names))

	// SLICES - Dynamic arrays - like vectors in cpp
	// Creating slices is almost same as creating arrays
	// In order to create slices, just don't give size parameter in [] square brackets while declaring a slice
	var scores = []int{100, 50, 60}
	scores = append(scores, 85) // We cannot append to arrays, but we can to append to slices
	fmt.Println(scores, len(scores))

	// SLICE RANGES
	// using := because using rangeOne variable for the first time, so it declares and initializes it
	rangeOne := names[1:3] // start is inclusive and end is exclusive - just like python
	fmt.Println("Range one: ", rangeOne)

	rangeTwo := names[2:]
	fmt.Println("Range two: ", rangeTwo)

	rangeThree := names[:3]
	fmt.Println("Range three: ", rangeThree)

	rangeOne = append(rangeOne, "Captain")
	fmt.Println("Range one after append: ", rangeOne)

	// Ranges are also slices, hence we can append elements to them
}
