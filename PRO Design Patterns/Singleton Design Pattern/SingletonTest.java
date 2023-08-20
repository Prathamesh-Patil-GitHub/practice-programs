import java.util.Scanner;

class EzPrinter{
	private boolean endLine=false;
	static EzPrinter obj = null;

	public static EzPrinter getEzPrinter(){
		if(obj == null){
			obj = new EzPrinter();
		}
		return obj;
	}

	public void setEndLine(boolean value){
		this.endLine = value;
	}

	public void print(String str){
		System.out.print(str + (endLine? "\n" : ""));
	}
}

class SingletonTest{
	public static void main(String [] args){
		EzPrinter printer = EzPrinter.getEzPrinter();
		printer.print("Prathamesh Patil");
		printer.setEndLine(true);
		printer.print("Prathamesh Patil");
		printer.print("122B2F147");
	}
}