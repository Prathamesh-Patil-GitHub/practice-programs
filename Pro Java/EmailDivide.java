import java.util.Scanner;
class EmailDivide{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the Email Address");
		String str=in.nextLine();
		int at=str.indexOf('@');
		int dot=str.indexOf('.');
		if(at==-1 || dot==-1){
			System.out.println("Invalid Email ID!");
			return;
		}
		System.out.print("User Name:");
		for(int i=0;i<at;i++)
			System.out.print(str.charAt(i));
		System.out.println();
		System.out.print("Company  :");
		for(int i=at+1;i<dot;i++)
			System.out.print(str.charAt(i));
		System.out.println();
		System.out.print("Domain   :");
		for(int i=dot+1;i<str.length();i++)
			System.out.print(str.charAt(i));
		System.out.println();
	}
}