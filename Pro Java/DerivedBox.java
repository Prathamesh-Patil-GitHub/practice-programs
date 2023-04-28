import java.util.*;
class Box extends Rectangle{   //We already have an class Rectangle in same directory
	double depth;
	public void setBoxDim(){
	Scanner in=new Scanner(System.in);
	setDimension();		//This is declared in Rectangle class which sets length and breadth
	System.out.println("Enter the depth");
	depth=in.nextDouble();
	}
	public void volume(){
		System.out.println("Volume of Box having length  is "+(length*breadth*depth));
	}
}
class DerivedBox{
	public static void main(String[] args){
		Box b=new Box();
		b.setBoxDim();
		b.area();
		b.volume();
	}
}