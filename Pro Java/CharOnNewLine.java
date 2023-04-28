import java.util.Scanner;
class CharOnNewLine{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the String");
		String str=in.nextLine();
		System.out.println();
		for(int i=0;i<str.length();i++)
			System.out.println("       "+str.charAt(i));
	}
}