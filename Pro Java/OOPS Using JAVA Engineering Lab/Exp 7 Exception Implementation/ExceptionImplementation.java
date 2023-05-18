/// Author: Prathamesh Patil

import java.util.*;
public class ExceptionImplementation {
	public static void main(String [] args) {
		
		int num1, num2;
		Scanner in = new Scanner(System.in);
		try {
			System.out.println("Enter number 1: ");
			num1 = in.nextInt();
			System.out.println("Enter number 2: ");
			num2 = in.nextInt();
			
			System.out.println("Division: "+num1/num2);
		}
		catch(Exception exp) {
			System.out.println("Exception Occurred: ");
			System.out.println("Message: "+exp.getMessage());
		}
		
		
		try {
			int arr[] = {1, 2, 3, 4, 5};
			System.out.println("Enter the number of elements you want to see out of 5: ");
			int n = in.nextInt();
			for(int i=0;i<n;i++) {
				System.out.print(arr[i]+" ");
			}
		}
		catch(Exception exp) {
			System.out.println("Exception Occurred: ");
			System.out.println("Message: "+exp.getMessage());
		}
		in.close();
	}
}
