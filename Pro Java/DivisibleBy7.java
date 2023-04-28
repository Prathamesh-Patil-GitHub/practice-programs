import java.util.*;
class DivisibleBy7{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter The Number");
		int n=in.nextInt();
		if(n%7==0)
			System.out.println(n+" is divisible by 7");
		else
			System.out.println(n+" is not divisible by 7");
	}
}