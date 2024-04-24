package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// This line creates a reader object of type *bufio.Reader, which we can use to read from os.Stdin (Standard Input)
var reader *bufio.Reader = bufio.NewReader(os.Stdin)

func getInput(prompt string) (string, error) {
	fmt.Print(prompt)
	input, err := reader.ReadString('\n')
	return strings.TrimSpace(input), err
}

func createBill() bill {

	name, _ := getInput("Enter the name of the bill: ")

	println("Created the bill - ", name)
	return newBill(name)
}

func main() {
	myBill := createBill()

	wannaContinue := true

	for wannaContinue {

		println("1. Add Item")
		println("2. Update Tip")
		println("3. Print Bill")
		println("4. Exit")

		tempStr, _ := getInput("Enter your choice: ")
		choice, _ := strconv.ParseInt(tempStr, 10, 64)

		switch choice {
		case 1:
			{
				itemName, _ := getInput("Enter Item Name: ")
				tempStr, _ := getInput("Enter Item Price: ")
				itemPrice, _ := strconv.ParseFloat(tempStr, 64)
				myBill.addItem(itemName, itemPrice)
				break
			}

		case 2:
			{
				tempStr, _ := getInput("Enter Tip value: ")
				tip, _ := strconv.ParseFloat(tempStr, 64)
				myBill.updateTip(tip)
			}

		case 3:
			{
				println(myBill.format())
			}

		case 4:
			{
				wannaContinue = false
				break
			}
		}
	}

	println("\n\nThank You for shopping - Please Visit Again !!!")
}
