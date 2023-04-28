import java.util.*;
class MaxTwo{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Two Numbers");
		int x=in.nextInt();
		int y=in.nextInt();
		if(x>y)
		System.out.println(x+" is Maximum");
		else
		System.out.println(y+" is Maximum");
	}
}