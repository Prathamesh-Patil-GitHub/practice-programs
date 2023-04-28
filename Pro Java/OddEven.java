import java.util.*;
class OddEven{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Ente the Number");
		int n=in.nextInt();
		if(n%2==0)
		System.out.println(n+" is Even number");
		else
		System.out.println(n+" is Odd number");
	}
}