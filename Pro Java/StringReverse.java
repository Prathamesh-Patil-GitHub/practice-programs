import java.util.Scanner;
class StringReverse{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		String[] s=new String[5];
		System.out.println("Enter "+ s.length+" Strings");
		for(int i=0;i<s.length;i++)
			s[i]=in.nextLine();
		System.out.println("\nReverse Strings are as follws:\n");
		for(String t:s){
			StringBuffer str=new StringBuffer(t);
			System.out.println(str.reverse());
		}
	}
}