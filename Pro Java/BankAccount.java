import java.util.*;
class BankAccount{

	private String name,ac_number;
	private double balance;

	public void getData(){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the *Name* of the account holder");
		name=in.nextLine();
		System.out.println("Enter the *Account Number* of the account holder");
		ac_number=in.nextLine();
		System.out.println("Enter the *Balance* in the account");
		balance=in.nextDouble();
	}
	public double returnBalance(){
		return balance;
	}
	public void putData(){
		System.out.println("Name          ="+name);
		System.out.println("Account Number="+ac_number);
		System.out.println("Balance       ="+balance);
	}
	public static void main(String[] args){
		BankAccount[] b=new BankAccount[5];
		System.out.println("Enter Data for "+b.length+" Bank Account(s)\n");
		for(int i=0;i<b.length;i++){
			b[i]=new BankAccount();
			System.out.println("Enter Data for Bank Account No."+(i+1));
			b[i].getData();
		}
		System.out.println("_______________________________________________________________");
		System.out.println("\n\nAccounts with Balance greater than 10000");
		for(int i=0;i<b.length;i++){
			if(b[i].returnBalance()>10000){
				System.out.println();
				b[i].putData();
			}
		}
	}
}