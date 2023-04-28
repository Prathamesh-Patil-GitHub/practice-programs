import java.util.Scanner;
class Average{
	public static void main(String[] args){
		int x,y,z;
		Scanner in=new Scanner(System.in);
		System.out.println("Please Enter 3 Numbers");
		x=in.nextInt();
		y=in.nextInt();
		z=in.nextInt();
		System.out.println("The Average of "+x+","+y+" and "+z+" is "+((x+y+z)/3.0));
	}
}