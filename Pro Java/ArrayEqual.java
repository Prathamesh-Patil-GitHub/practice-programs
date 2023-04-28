import java.util.Scanner;
class ArrayEqual{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int[] a=new int[5];
		int[] b=new int[5];
		System.out.println("Enter "+a.length+" elements for First Array");
		for(int i=0;i<a.length;i++)
			a[i]=in.nextInt();
		System.out.println("Enter "+b.length+" elements for Second Array");
		for(int i=0;i<b.length;i++)
			b[i]=in.nextInt();
		boolean flag=false;
		for(int i=0;i<a.length;i++)
			if(a[i]!=b[i])
				flag=true;
		if(flag==true)
			System.out.println("Both arrays are not Equal !!!");
		else
			System.out.println("Both arrays are Equal !!!");
	}
}