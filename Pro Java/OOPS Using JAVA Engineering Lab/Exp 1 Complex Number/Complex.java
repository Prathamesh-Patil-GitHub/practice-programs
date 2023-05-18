/// Author: Prathamesh Patil

import java.util.Scanner;

public class Complex {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		ComplexNumber num1 = new ComplexNumber();
		ComplexNumber num2 = new ComplexNumber();
		System.out.println("Enter the real and imaginery numbers for the complex number 1: ");
		num1.setReal(in.nextDouble());
		num1.setImg(in.nextDouble());
		
		System.out.println("Enter the real and imaginery numbers for the complex number 2: ");
		num2.setReal(in.nextDouble());
		num2.setImg(in.nextDouble());
		
		int choice;
		ComplexNumber result = null;
		do{
			System.out.println("<<<<< MENU >>>>>");
			System.out.println("1. Add\n 2. Subtract \n3. Multiply \n4. Divide \n5. Exit\nEnter your choie: ");
			choice = in.nextInt();
			switch(choice) {
			case 1:
				result = num1.add(num2);
				break;
			case 2:
				result = num1.subtract(num2);
				break;
			case 3:
				result = num1.multiply(num2);
				break;
			case 4:
				result = num1.divide(num2);
				break;
			case 5:
				break;
			default:
				System.out.println("Invalid Choice!");
			}
			if(choice !=5) {
				result.print();
			}
		}while(choice != 5);
		
		System.out.println("Bye Bye");
		
		
		
//		
//		
//		
//		ComplexNumber addition = num1.add(num2);
//		
//		System.out.println("Addition of the numbers: ");
//		addition.print();
		in.close();
		return;
	}
}

class ComplexNumber {
	double real, img;

	ComplexNumber() {
		real = 0;
		img = 0;
	}

	void setReal(double real) {
		this.real = real;
	}

	void setImg(double img) {
		this.img = img;
	}

	ComplexNumber add(ComplexNumber num) {
		ComplexNumber temp = new ComplexNumber();
		temp.real = this.real + num.real;
		temp.img = this.img + num.img;
		return temp;
	}

	ComplexNumber subtract(ComplexNumber num) {
		ComplexNumber temp = new ComplexNumber();
		temp.real = this.real - num.real;
		temp.img = this.img - num.img;
		return temp;
	}

	ComplexNumber multiply(ComplexNumber num) {
		ComplexNumber temp = new ComplexNumber();
		temp.real = this.real * num.real;
		temp.img = this.img * num.img;
		return temp;
	}

	ComplexNumber divide(ComplexNumber num) {
		ComplexNumber temp = new ComplexNumber();
		temp.real = this.real / num.real;
		temp.img = this.img / num.img;
		return temp;
	}

	void print() {
		System.out.println("Real: " + this.real);
		System.out.println("Img: " + this.img);
	}
}
