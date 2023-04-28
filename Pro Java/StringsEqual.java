import java.util.Scanner;
class StringsEqual{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter First String");
		String str1=in.nextLine();
		System.out.println("Enter Second String");
		String str2=in.nextLine();
		if(str1.equals(str2))
			System.out.println("Both Strings Are Equal!");
		else
			System.out.println("Both Strings Are Not Equal!");
		System.out.println("\n!!!Cases are considered Here!!!");
	}
}