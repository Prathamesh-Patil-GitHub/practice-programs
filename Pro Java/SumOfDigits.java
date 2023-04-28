import java.util.*;
class SumOfDigits{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int n,sum=0,r;
		System.out.println("Enter the number");
		n=in.nextInt();
		while(n!=0){
			r=n%10;
			sum+=r;
			n/=10;
		}
		System.out.println("The sum of digits is: "+sum);
	}
}