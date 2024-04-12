// Visit https://pkg.go.dev/std for complete reference to The Standard Library of GO

package main

import (
	"fmt"
	"sort"
	"strings"
)

func main() {

	// strings package
	fmt.Println("\n -- PLAYING WITH THE STRINGS PACKAGE -- ")

	spell := "Wingardium Leviosa ✨"
	fmt.Println(strings.Contains(spell, "Leviosa"))
	fmt.Println(strings.Contains(spell, "Leviosaaaa"))
	// Replace all doesn't replace in-place, it 'returns a new string' after replacing
	fmt.Println(strings.ReplaceAll(spell, "Wingardium", "Perfect"))
	fmt.Println("Oringinal string value:", spell)
	// Return string in uppercase
	fmt.Println(strings.ToUpper(spell))
	// Return index of substr
	fmt.Println(strings.Index(spell, "in"))
	// Splitting the string
	fmt.Println(strings.Split(spell, " "))

	// sort package
	fmt.Println("\n -- PLAYING WITH THE SORT PACKAGE --")
	ages := []int{60, 45, 30, 23, 25, 12, 25}
	sort.Ints(ages) // In-place sorting
	fmt.Println(ages)

	index := sort.SearchInts(ages, 30)

	fmt.Printf("Index of 30 in %v is: %v \n", ages, index)

	index = sort.SearchInts(ages, 130)
	// If the element is not present it returns the index as 1 + last index i.e. size of the slice
	fmt.Printf("Index of 130 in %v is: %v \n", ages, index)

	// We cannot use arrays with sort.Ints and other functions, we can only use slices

	names := []string{"Miles", "Peter", "Spidey", "Big-M"}
	sort.Strings(names)
	fmt.Println(names)

	fmt.Println(sort.SearchStrings(names, "Spidey"))
}
