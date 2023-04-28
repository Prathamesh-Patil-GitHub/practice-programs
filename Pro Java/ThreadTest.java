class Table{
	void printTable(int n){
		System.out.println("The table of "+n+" is as follows:");
		for(int i=1;i<=10;i++){
			System.out.println(n+" X "+i+" = "+(n*i));
			try{Thread.sleep(100);}catch(Exception e){System.out.println(e);}
		}
		System.out.println("End of "+n+" Table");
		System.out.println("------------------------------------------");
	}
}
class ThreadA extends Thread{
	Table table;
	ThreadA(Table t){
		table=t;
	}
	public void run(){
		synchronized(table){
			table.printTable(5);
		}
	}
}
class ThreadB extends Thread{
	Table table;
	ThreadB(Table t){
		table=t;
	}
	public void run(){
		synchronized(table){
			table.printTable(7);
		}
	}
}
class ThreadTest{
	public static void main(String[] args){
		Table tableResource=new Table();
		ThreadA t1=new ThreadA(tableResource);
		ThreadB t2=new ThreadB(tableResource);
		t1.start();
		t2.start();
	}
}