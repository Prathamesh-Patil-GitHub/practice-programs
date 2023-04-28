class Animal{
	void travel(){
		System.out.println("Animal Travels");
	}
	public static void main(String[] args){
		Animal obj;
		obj=new Cow();		//Cow Object
		obj.travel();		//Cow travel method

		obj=new Fish();		//Fish Object
		obj.travel();		//Fish travel method

		obj=new Bird();		//Bird Object
		obj.travel();		//Bird travel method
	}
}
class Cow extends Animal{
	void travel(){
		System.out.println("Cow travels on earth");
	}
}
class Fish extends Animal{
	void travel(){
		System.out.println("Fish travels under water");
	}
}
class Bird extends Animal{
	void travel(){
		System.out.println("Bird travels in Air");
	}
}