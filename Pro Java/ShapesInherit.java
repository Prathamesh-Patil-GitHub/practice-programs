class Shape{
	public void showShape(){System.out.println("This is shape");}
}
class Rect extends Shape{
	public void showRect(){System.out.println("This is rectangular shape");}
}
class Circle extends Shape{
	public void showCircle(){System.out.println("This is cicular shape");}
}
class Square extends Rect{
	public void showSquare(){System.out.println("Square is a rectangle");}
}
class ShapesInherit{
	public static void main(String[] args){
		Square s=new Square();
		Circle c=new Circle();
		System.out.println("Square class Methods:");
		s.showShape();
		s.showRect();
		s.showSquare();

		System.out.println("Circle class Methods:");
		c.showShape();
		c.showCircle();
		}
}