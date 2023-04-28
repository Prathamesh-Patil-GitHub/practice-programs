class RectShape{
	double length,breadth;
	RectShape(double l,double b){
	length=l;
	breadth=b;
	}
	public void area(){
	System.out.println("Area ="+(length*breadth));
	}
	public void perimeter(){
		System.out.println("Perimeter ="+2*(length+breadth));
	}
}
class SquareShape extends RectShape{
	SquareShape(double s){
	super(s,s);
	}
}
class AreaPerimeterRectSquare{
	public static void main(String[] args){
		SquareShape s=new SquareShape(5);
		s.area();
		s.perimeter();
	}
}