class ImgNum{
	int real,img;
	ImgNum(){real=img=0;}
	ImgNum(int a,int b){
		real=a;
		img=b;
	}
	ImgNum compute(ImgNum obj){
		ImgNum result=new ImgNum();

		result.real=real+obj.real;
		result.img=img+obj.img;

		return result;
	}
	void display(){
		System.out.println("Number is : "+real+"+"+img+"i");
	}
	public static void main(String[] args){
		ImgNum i1=new ImgNum(10,20);
		ImgNum i2=new ImgNum(30,40);
		ImgNum i3=new ImgNum();
		i1.display();
		i2.display();
		i3=i1.compute(i2);
		System.out.println("The addition of both numbers is:");
		i3.display();
	}
}