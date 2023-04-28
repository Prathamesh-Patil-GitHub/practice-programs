import java.util.Scanner;
class Occurences{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int[] a=new int[10];
		System.out.println("Enter "+a.length+" integer");
		for(int i=0;i<a.length;i++)
			a[i]=in.nextInt();
		System.out.println("Enter the number to scan");
		int n=in.nextInt();
		int count=0;
		for(int x:a)
			if(x==n)
				count++;
		System.out.println(n+" occurs "+count+" time(s) in the array");
	}

}