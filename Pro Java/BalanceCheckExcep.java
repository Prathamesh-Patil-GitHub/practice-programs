import java.util.Scanner;
class MinimumBalanceException extends Exception{
	MinimumBalanceException(String msg){
		super(msg);
	}
}
class BalanceCheckExcep{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the minimum balance");
		try{
			double d=in.nextDouble();
			if(d<1000)
				throw new MinimumBalanceException("Balance is insufficient");
			System.out.println("Balance is sufficient");
		}
		catch(MinimumBalanceException e){
			System.out.println(e);
		}
	}
}