import java.util.Scanner;
class NotMSBTE extends Exception{
	NotMSBTE(String msg){
		super(msg);
	}
}
class StringCheckExcep{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the String");
		try{
			String str=in.nextLine();
			if(!(str.equalsIgnoreCase("MSBTE")))
				throw new NotMSBTE("String is not MSBTE");
			System.out.println("String is MSBTE");
		}
		catch(NotMSBTE e){
			System.out.println(e);
		}
	}
}