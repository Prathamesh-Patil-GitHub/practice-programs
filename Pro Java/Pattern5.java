import java.util.Scanner;
class Pattern5{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter No of rows:");
		int n=in.nextInt();
		System.out.println("The Pattern Is:\n");
		int k=0;
		for(int i=1;i<=n;i++){
			if(n%2==0){
				if(i<=n/2)
					k++;
				if(i>(n/2)+1)
					k--;
			}
			else{
				if(i<=(n+1)/2)
					k++;
				else
					k--;
			}
		for(int j=1;j<=(n+1)/2;j++){
				if(j<=k)
					System.out.print("*");
				else
				 	System.out.print(" ");
			}
			System.out.println();
		}
	}
}