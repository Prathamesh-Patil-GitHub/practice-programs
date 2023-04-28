import java.util.*;
class Prime{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int n,i;
		System.out.println("Enter the number");
		n=in.nextInt();
		for(i=2;i<n;i++)
			if(n%i==0)
			{
				System.out.println(n+" is not a Prime Number");
				break;
			}
		if(i==n)
			System.out.println(n+" is a Prime Number");
	}
}