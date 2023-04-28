import java.util.Scanner;
class MaxMin{
	public static void main(String[] args){
	Scanner in=new Scanner(System.in);
	int max=0,min=0;
	System.out.println("Enter the number of integers you want to insert:");
	int	size=in.nextInt();
	int[] a=new int[size];
	System.out.println("Enter "+a.length+" numbers");
	for(int i=0;i<a.length;i++){
		a[i]=in.nextInt();
		if(i==0 || a[i]>max)
			max=a[i];
		if(i==0 || a[i]<min)
			min=a[i];
		}
	System.out.println("Maximum  ="+max);
	System.out.println("Minimum  ="+min);
	}
}