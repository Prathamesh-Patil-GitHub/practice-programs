import java.util.*;
class AverageClass{
	private int n1,n2,n3;
	private double avg;
	public void calculate(){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter three numbers");
		n1=in.nextInt();
		n2=in.nextInt();
		n3=in.nextInt();
		avg=(n1+n2+n3)/3.0;
	}
	public void print(){
		System.out.println("The Average of "+n1+","+n2+" and "+n3+" is "+avg);
	}
	public static void main(String[] args){
		AverageClass avg=new AverageClass();
		avg.calculate();
		avg.print();
	}
}