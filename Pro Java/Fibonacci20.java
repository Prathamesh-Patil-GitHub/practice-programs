class Fibonacci20{
	public static void main(String[] args){
		int x=0,y=1;
		System.out.println("Fibonacci series upto 20 terms is as follows:");
		System.out.print(x+" ");
		System.out.print(y+" ");
		for(int i=1;i<=18;i++){
			int sum=x+y;
			x=y;
			y=sum;
			System.out.print(sum+" ");
		}
	}
}
