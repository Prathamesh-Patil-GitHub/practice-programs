import java.util.Scanner;
class AreaOfRectangle{
	public static void main(String[] args){
		float length,breadth;
		Scanner in=new Scanner(System.in);
		System.out.println("Please Enter Length and Breadth of Rectangle");
		length=in.nextFloat();
		breadth=in.nextFloat();
		System.out.println("Area of Rectangle: "+(length*breadth));
	}
}