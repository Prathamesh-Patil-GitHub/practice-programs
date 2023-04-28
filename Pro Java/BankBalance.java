class Bank{
	int getBalance(){
		return 0;
	}
}
class BankA extends Bank{
	int getBalance(){
		return 1000;
	}
}
class BankB extends Bank{
	int getBalance(){
		return 1500;
	}
}
class BankC extends Bank{
	int getBalance(){
		return 2000;
	}
}
class BankBalance{
	public static void main(String[] args){
	BankA ba=new BankA();
	BankB bb=new BankB();
	BankC bc=new BankC();
	System.out.println("BankA balance="+ba.getBalance());
	System.out.println("BankB balance="+bb.getBalance());
	System.out.println("BankC balance="+bc.getBalance());
	}
}
