import java.util.Scanner;
class ConvertToKM{
	public static void main(String[] args){
		float meter;
		Scanner in=new Scanner(System.in);
		System.out.println("Please Enter Meter Value");
		meter=in.nextFloat();
		System.out.println("Converted KM are "+(meter/1000.0));
	}
}