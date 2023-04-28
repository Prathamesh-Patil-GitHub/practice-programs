import java.util.Scanner;
class OddEvenArray{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the numbers of integers you want to insert:");
		int size=in.nextInt();
		int[] array=new int[size];
		System.out.println("Enter "+array.length+" integers");
		for(int i=0;i<array.length;i++)
			array[i]=in.nextInt();
		int odd=0,even=0;
		for(int x:array)
			if(x%2==0)
				even++;
			else
				odd++;
		System.out.println("Even Numbers Count :"+even);
		System.out.println("Odd Numbers Count :"+odd);
	}
}