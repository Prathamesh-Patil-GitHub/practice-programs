import java.util.*;
class StringTokenizerTest{
	public static void main(String[] args){
		System.out.println("Enter a String");
		StringTokenizer st=new StringTokenizer(new Scanner(System.in).nextLine()," ");
		while(st.hasMoreTokens()){
			System.out.println("Next Token is: "+st.nextToken());
		}
	}
}