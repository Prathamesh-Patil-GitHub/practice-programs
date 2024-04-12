package main

import "fmt"

func main() {

	// Variable name rules are just like C language

	// STRINGS
	var nameOne string = "Prathamesh 😎"

	// Automatic type inference of Go
	var nameTwo = "meow 😽"

	// Just declaring - You must give type while just declaring - Type inference isn't possible with just declaration - hence gives error
	var nameThree string
	// BTW, Empty string is the default value for string, if we don't give anything as the value

	fmt.Println(nameOne, nameTwo, nameThree)

	// nameOne = 25   // Not possible because it is a string

	nameOne = "Groot"
	nameThree = "Rocket"

	fmt.Println(nameOne, nameThree)

	// Short hand for type inference
	// We can't use this syntax out of a function
	nameFour := "Captain"

	fmt.Println(nameFour)

	// INTs
	var ageOne int = 20
	var ageTwo = 30
	ageThree := 40

	fmt.Println(ageOne, ageTwo, ageThree)

	// Bits & Memory
	// We can use int8 to decalre an 8-bit integer with Range: -128 to 127
	// If we assign value out of range compiler gives an error
	var num1 int8 = 25
	var num2 int8 = -128
	// var num2 int8 = -129	// Gives an error - out of range (overflows)

	// Similarly, we have, int14, int32, int64
	// Normal int is 32 bit

	var num3 uint8 = 255
	// var num3 uint = -2 	// not allowed

	fmt.Println(num1, num2, num3)

	// FLOATs
	// Go doesn't allow only float we must specify either 32 or 64
	var score1 float32 = 2.3
	var score2 float64 = 123123123123.231232213
	// Inferred type for floats will be float64
	score3 := 45.2

	fmt.Println(score1, score2, score3)

}
