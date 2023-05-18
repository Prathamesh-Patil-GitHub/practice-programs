/// Author: Prathamesh Patil

import java.util.*;

class Stack{
	private int size;
	private int top;
	private int arr[];
	
	Stack(int size){
		this.size = size;
		this.top = -1;
		arr = new int[size];
	}
	
	boolean isEmpty() {
		return this.top == -1;
	}
	
	boolean push(int num) {
		try {
			arr[++this.top] = num;
			return true;
		}
		catch(ArrayIndexOutOfBoundsException exp) {
			top--;
			return false;
		}
	}
	
	int pop() {
		try {
			return arr[this.top--];
		}
		catch(ArrayIndexOutOfBoundsException exp) {
			top++;
			return 0;
		}
	}
	
	int peek() {
		try {
			return arr[top];
		}
		catch(ArrayIndexOutOfBoundsException exp) {
			return 0;
		}
	}
}

public class StackWithException {
	public static void main(String [] args) {
		Stack stk = new Stack(10);
		Scanner in = new Scanner(System.in);
		int choice;
		do {
			System.out.println("<<< MENU >>>");
			System.out.println("1. Push");
			System.out.println("2. Pop");
			System.out.println("3. Peek");
			System.out.println("4. Exit");
			System.out.print("Enter your choice: ");
			choice = in.nextInt();
			switch(choice) {
			case 1: 
				System.out.print("Enter the element to push: ");
				int num = in.nextInt();
				if(stk.push(num)) {
					System.out.println("Element Pushed!");
				}
				else {
					System.out.println("Overflow!");
				}
				break;
			case 2:
				if(!stk.isEmpty()) {
					System.out.println("Popped Element: "+ stk.pop());
				}
				else {
					System.out.println("Underflow!");
				}
				break;
			
			case 3:
				if(!stk.isEmpty()) {
					System.out.println("Top -> "+stk.peek());
				}
				else {
					System.out.println("Stack is Empty!");
				}
				break;
			case 4:
				System.out.println("Shutting Down...");
				break;
			}
		}while(choice != 4);
	}
}
