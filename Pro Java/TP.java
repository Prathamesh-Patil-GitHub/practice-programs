import java.util.Scanner;
class TP{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the String");
		String str=in.nextLine();
		int count=0;
		for(int i=0;i<str.length();i++){
			if(str.charAt(i)=='a')
			count++;
		}
		System.out.println("a Occurs " +count+ " time(s) in the string");
	}
}