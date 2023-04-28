import java.util.*;
class Rectangle{
	double length,breadth;
	public void setDimension(){
	Scanner in=new Scanner(System.in);
	System.out.println("Enter the length");
	length=in.nextDouble();
	System.out.println("Enter the breadth");
	breadth=in.nextDouble();
	}
	public void area(){
		System.out.println("Area of rectangle having length = "+length+" and breadth = "+breadth+" is "+(length*breadth));
	}
	public static void main(String[] args){
		Rectangle a=new Rectangle();
		Rectangle b=new Rectangle();
		a.area();
		b.area();
	}
}