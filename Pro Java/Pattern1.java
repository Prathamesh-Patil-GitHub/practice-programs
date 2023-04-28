import java.util.Scanner;
class Pattern1{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter No of rows:");
		int n=in.nextInt();
		System.out.println("The Pattern Is:\n");
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j<=i)
					System.out.print("*");
				else
				 	System.out.print(" ");
			}
			System.out.println();
		}
	}
}