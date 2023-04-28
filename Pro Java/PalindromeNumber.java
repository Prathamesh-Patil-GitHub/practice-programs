import java.util.*;
class PalindromeNumber{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int n,rev=0,r,temp;
		System.out.println("Enter the number");
		n=in.nextInt();
		temp=n;
		while(n!=0){
			r=n%10;
			rev=rev*10+r;
			n/=10;
		}
		if(temp==rev)
			System.out.println("The number is Palindrom");
		else
			System.out.println("The number is not Palindrome");
	}
}