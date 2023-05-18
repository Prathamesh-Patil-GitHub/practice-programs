/// Author: Prathamesh Patil

import java.util.*;
abstract class Shape{
	abstract public double computeArea();
}

class Rectangle extends Shape{
	double length, breadth;
	Rectangle(double length, double breadth){
		this.length = length;
		this.breadth = breadth;
	}
	
	public double computeArea() {
		return length*breadth;
	}
}

class Triangle extends Shape{
	double base, height;
	Triangle(double base, double height){
		this.base = base;
		this.height = height;
	}
	
	public double computeArea() {
		return 0.5 * base * height;
	}
}

public class DynamicBinding {

	public static void main(String[] args) {
		Shape obj;
		Scanner in = new Scanner(System.in);
		int choice;
		System.out.println("1. Area of Rectangle");
		System.out.println("2. Area of Triangle");
		System.out.print("Enter your choice: ");
		choice = in.nextInt();
		
		if(choice == 1) {
			int length, breadth;
			System.out.println("Enter the length");
			length = in.nextInt();
			System.out.println("Enter the breadth");
			breadth = in.nextInt();
			obj = new Rectangle(length, breadth);
			System.out.println("Area of Rectangle = " + obj.computeArea());
		}
		else if(choice == 2){
			int base, height;
			System.out.println("Enter the base");
			base = in.nextInt();
			System.out.println("Enter the height");
			height = in.nextInt();
			obj = new Triangle(base, height);
			System.out.println("Area of Triangle = " + obj.computeArea());
		}
		else {
			System.out.println("Invalid Choice!");
		}
	}
}
