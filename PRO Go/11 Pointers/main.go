package main

// Pointers in Go are just like Pointers in C

func updateName(name string) {
	name = "Iron Man"
}

func updateNameByPointer(name *string) {
	*name = "Iron Man"
}

func main() {
	name := "Captain"
	// println("Pass by Value")
	// println(name)    // Instead of fmt.println() we can also use println which is in builtin package
	// updateName(name) // Won't change
	// println(name)

	println("Pass by Reference / Pass by Pointer")
	println(name)
	var pointer *string = &name
	updateNameByPointer(pointer) // Will change
	println(name)

}
