class TablePrinter{
	public void print(int n){
		System.out.println("\n\nTable of "+n+" is:");
		for(int i=1;i<=10;i++){
			System.out.println(i*n);
			}
	}
	public void print(double n){
		System.out.println("\n\nTable of "+n+" is:");
		for(int i=1;i<=10;i++){
				System.out.println(i*n);
		}

	}
	public static void main(String[] args){
		TablePrinter t = new TablePrinter();
		t.print(5);
		t.print(11.23);
	}
}