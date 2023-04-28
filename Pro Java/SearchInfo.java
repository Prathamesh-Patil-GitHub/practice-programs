import java.util.Scanner;
class SearchInfo{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		String[] s=new String[5];
		System.out.println("Enter "+ s.length+" Strings");
		for(int i=0;i<s.length;i++)
			s[i]=in.nextLine();
		boolean flag=false;
		for(String t:s)
			if(t.equalsIgnoreCase("Info"))
				flag=true;
		if(flag==true)
			System.out.println("\"Info\" string is provided");
		else
			System.out.println("\"Info\" string is not provided");
	}
}