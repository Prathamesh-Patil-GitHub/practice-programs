import java.util.Scanner;
class AreaOfCircle{
	public static void main(String[] args){
		float radius;
		Scanner in=new Scanner(System.in);
		System.out.println("Please Enter Radius of Circle");
		radius=in.nextFloat();
		System.out.println("Area of Circle: "+(3.14*radius*radius));
	}
}