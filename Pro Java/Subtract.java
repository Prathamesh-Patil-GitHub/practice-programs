import java.util.Scanner;
class Subtract{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int x,y;
		System.out.println("Please Enter Two Numbers");
		x=in.nextInt();
		y=in.nextInt();
		System.out.println("Subtraction of "+x+" and "+y+" is "+(x-y));
	}
}