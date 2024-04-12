package mymath

// Only those functions, whose names start with capital letter
// are accessible to other packages when imported

// Go handles access specification this way:
// Starting with lower-case : private, Starting with upper-case: public

func Add(num1 float64, num2 float64) float64 {
	return num1 + num2
}
