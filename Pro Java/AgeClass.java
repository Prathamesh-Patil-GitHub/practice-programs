import java.util.*;
class AgeClass{
	public static void main(String[] args){
	Scanner in=new Scanner(System.in);
	System.out.println("Enter the Age");
	int age=in.nextInt();
	if(age>=65)
	System.out.println("Senior Citizen");
	else if(age>=18)
	System.out.println("Adult");
	else
	System.out.println("Child");
	}
}
