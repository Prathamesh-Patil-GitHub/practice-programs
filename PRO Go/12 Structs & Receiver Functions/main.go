package main

import "fmt"

func main() {
	mybill := newBill("Ron's Bill")
	mybill.addItem("Pie", 4.99)
	mybill.addItem("Cake", 8.99)
	mybill.addItem("Pudding", 5.99)
	mybill.addItem("Jelly", 14.99)
	mybill.updateTip(9.99)
	fmt.Println(mybill.format())
}

// Run the program using command: go run main.go bill.go
