class ShapeDMD{
	double dim1,dim2;
	ShapeDMD(double a,double b){
		dim1=a;
		dim2=b;
	}
	ShapeDMD(double a){
		dim1=dim2=a;
	}
	void area(){
		System.out.println("Area for shape is undefined");
	}
}
class ShapeRect extends ShapeDMD{
	ShapeRect(double a,double b){
		super(a,b);
	}
	void area(){
		System.out.println("Area of rectangle having length "+dim1+" breadth "+dim2+" is:"+(dim1*dim2));
	}
}
class ShapeTriangle extends ShapeDMD{
	ShapeTriangle(double a,double b){
		super(a,b);
	}
	void area(){
		System.out.println("Area of triangle having base "+dim1+" height "+dim2+" is:"+(0.5*dim1*dim2));
	}
}
class ShapeCircle extends ShapeDMD{
	ShapeCircle(double a){
		super(a);
	}
	void area(){
		System.out.println("Area of cicle having radius:"+dim1+" is:"+(3.14*dim1*dim1));
	}
}
class TestShape{
	public static void main(String[] args){
		ShapeDMD obj;
		obj=new ShapeRect(10,20);
		obj.area();

		obj=new ShapeTriangle(25,30);
		obj.area();

		obj=new ShapeCircle(50);
		obj.area();
	}
}
