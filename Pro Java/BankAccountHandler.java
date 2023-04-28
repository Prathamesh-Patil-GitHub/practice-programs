import java.util.*;
class BankAccountHandler{
	private String name,address,acc_type,acc_number,password;
	private double balance;
	private static int num_generator=1000;
	static Scanner in=new Scanner(System.in);

	BankAccountHandler(){
		acc_number="BA"+num_generator;
		num_generator++;
	}

	public void getData(){
		in.nextLine();
		System.out.println("Enter the *Name* of the Account Holder");
		name=in.nextLine();
		System.out.println("Enter the *Address* of the Account Holder");
		address=in.nextLine();
		System.out.println("Enter the *Type_Of_Account* of the Account Holder(Enter S if Saving / Enter C if Current *Default-Current*)");
		String str=in.nextLine();
		if(str.equalsIgnoreCase("s"))
			acc_type="Saving";
		else
			acc_type="Current";
		System.out.println("Set the password:(!NEVER DISCLOSE THIS PASSWORD WITH ANYONE ELSE)");
		password=in.nextLine();
		System.out.println("Enter the *Balance* of the Account Holder");
		balance=in.nextDouble();
		System.out.println("YOUR ALLOTED ACCOUNT NO. IS: "+acc_number);
	}
	public void putData(){
		System.out.println("Account Number:"+acc_number);
		System.out.println("Name          :"+name);
		System.out.println("Account Type  :"+acc_type);
		System.out.println("Address       :"+address);
		System.out.println("Avl. Balance  :"+balance);
	}
	public String returnAccNumber(){
		return acc_number;
	}
	public String returnPassword(){
			return password;
	}
	public void deposit(){
		System.out.println("Enter the amount you want to deposit");
		double deposit=in.nextDouble();
		balance=balance+deposit;
		System.out.println("AMOUNT DEPOSITED!!!");
	}
	public void withdraw(){
			System.out.println("Enter the amount you want to withdraw");
			double withdraw=in.nextDouble();
			if(withdraw>balance){
				System.out.println("INSUFFICIENT BALANCE!!!");
				return;
			}
			balance=balance-withdraw;
			System.out.println("AMOUNT WITHDRAWN!!!");
	}
	public void changeCred(){
		System.out.println("Enter P to Change Password / Enter A to change Address");
		String str=in.nextLine();
		if(str.equalsIgnoreCase("p")){
			System.out.println("Enter New Password");
			password=in.nextLine();
			System.out.println("PASSWORD UPDATED!!!");
		}
		else{
			System.out.println("Enter New Address");
			address=in.nextLine();
			System.out.println("ADDRESS UPDATED!!!");
		}
	}
	public static void main(String[] args){
		boolean flag=false;
		String ac_no,pass;
		short choice;
		BankAccountHandler[] b = new BankAccountHandler[10];
		int count=0;
		do{
			System.out.println("++++WELCOME++++");
			System.out.println("++++  MENU ++++");
			System.out.println("1.Create Account");
			System.out.println("2.Display Account");
			System.out.println("3.Deposit Amount");
			System.out.println("4.Withdraw Amount");
			System.out.println("5.Change Credentials");
			System.out.println("6.Exit");
			System.out.print("\n\nEnter Your Choice:");
			choice=in.nextShort();
			switch(choice){
				case 1: if(count>=10){
						System.out.println("Limit Exceeded for Bank Accounts");
						break;
						}
						b[count] = new BankAccountHandler();
						b[count].getData();
						System.out.println("ACCOUNT CREATED!!!");
						count++;
						break;
				case 2: flag=false;
						in.nextLine();
						System.out.println("Enter the Account Number");
						ac_no=in.nextLine();
						for(int k=0;k<count;k++){
							if((b[k].returnAccNumber()).equalsIgnoreCase(ac_no)){
								System.out.println("Enter the password");
								pass=in.nextLine();
								if((b[k].returnPassword()).equals(pass)){
									System.out.println("\n\nAccount Details are:");
									b[k].putData();
								}
								else{
									System.out.println("INVALID PASSWORD");
									break;
								}
								flag=true;

							}
						}
						if(flag==false)
							System.out.println("Account Not Found");
						break;
				case 3: in.nextLine();
						flag=false;
						System.out.println("Enter the Account Number");
						ac_no=in.nextLine();
						for(int k=0;k<count;k++){
							if((b[k].returnAccNumber()).equalsIgnoreCase(ac_no)){
								b[k].deposit();
								flag=true;
							}
						}
						if(flag==false)
							System.out.println("Account Not Found");
						break;
				case 4: in.nextLine();
						flag=false;
						System.out.println("Enter the Account Number");
						ac_no=in.nextLine();
						for(int k=0;k<count;k++){
							if((b[k].returnAccNumber()).equalsIgnoreCase(ac_no)){
								System.out.println("Enter the password");
								pass=in.nextLine();
								if((b[k].returnPassword()).equals(pass)){
									b[k].withdraw();
								}
								else{
									System.out.println("INVALID PASSWORD");
									break;
								}
								flag=true;
							}
						}
						if(flag==false)
							System.out.println("Account Not Found");
						break;
				case 5: flag=false;
						in.nextLine();
						System.out.println("Enter the Account Number");
						ac_no=in.nextLine();
						for(int k=0;k<count;k++){
							if((b[k].returnAccNumber()).equalsIgnoreCase(ac_no)){
								System.out.println("Enter the password");
								pass=in.nextLine();
								if((b[k].returnPassword()).equals(pass)){
									b[k].changeCred();
								}
								else{
									System.out.println("INVALID PASSWORD");
									break;
								}
								flag=true;
							}
						}
						if(flag==false)
							System.out.println("Account Not Found");
						break;
				case 6: System.out.println("Thanks For Interacting!!!");
						break;
				default: System.out.println("INVALID INPUT");
			}
			System.out.println("\n\nPress Enter to continue");
			in.nextLine();
			in.nextLine();
			for(int i=0;i<30;i++)
			System.out.println();
		}while(choice!=6);
	}
}
