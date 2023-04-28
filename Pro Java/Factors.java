import java.util.*;
class Factors{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the number to calculate factors of the number");
		int n=in.nextInt();
		System.out.println("The factors of "+n+" are as follows:");
		for(int i=1;i<=n;i++)
			if(n%i==0)
				System.out.println(i);
	}
}