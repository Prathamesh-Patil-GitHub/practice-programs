package main

import "fmt"

type bill struct {
	name  string // Declaring struct is done without commas
	items map[string]float64
	tip   float64
}

// make new bills
func newBill(name string) bill {
	b := bill{
		name:  name,
		items: map[string]float64{},
		tip:   0,
	}
	return b
}

// Receiver function : A function which is associated with an object.
// format the bill
func (b bill) format() string {
	// Name as Title
	formattedString := fmt.Sprintln(b.name)

	// A separater line between title and items
	formattedString += fmt.Sprintln("--------------------------------------")
	total := 0.0

	// Items in the bill
	for k, v := range b.items {
		formattedString += fmt.Sprintf("%-25v ... $%v \n", k, v) //$-25v means %v with 25 characters long space to right, -25: Padding to right, 25: Padding to left
		total += v
	}

	// Tip: if given
	if b.tip != 0 {
		formattedString += fmt.Sprintf("%-25v ... $%0.2f \n", "Tip", b.tip)
		total += b.tip
	}

	// A separater line between items and total
	formattedString += fmt.Sprintln("--------------------------------------")

	// Total
	formattedString += fmt.Sprintf("%-25v ... $%0.2f \n", "Total", total)

	return formattedString
}

// Using this syntax, we restrict the usage of this function to the type of specified object.
// Above bill function can only be called with bill object. Just like member functions in cpp.
// So we cannot use format(), but we can use mybill.format()
// In above function we can access the properties of the calling object through the variable b
// By the way, it is pass by value. So any changes made to the b object would not reflect in the actual object :)
// Because every function in go, uses pass by value

// Now we will see, how to create receiver functions which can modify the values of the properties of the calling object
// To modify the object, we simply take the pointer of the object, while the synatx for calling the receiver function remains same, i.e. obj.function()
// Update tip
func (b *bill) updateTip(tip float64) {
	// (*b).tip = tip	: This is what we would manually do
	b.tip = tip // But, when we are using pointer in receiver functions, go automatically dereferences it and uses the value of the pointer to the object
	// So either we can use "(*b).tip" , or use "b.tip"
	// So we don't have to make any change in the referencing syntax, we just have to pass a pointer to modify the object in receiver functions
	// Also, there's another reason for passing pointers, instead of copy of objects, Because it takes space and time to create copies
	// So, generally receiver functions are created with pointers
}

// add an item to the bill
func (b *bill) addItem(name string, price float64) {
	b.items[name] = price
}
