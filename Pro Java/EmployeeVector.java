import java.util.*;
class EmployeeVector{
	int empno;
	String name;
	byte age;
	public void getData(){
		Scanner in=new Scanner(System.in);
		System.out.print("Enter the Employee No: ");
		empno=in.nextInt();
		in.nextLine();
		System.out.print("Enter the Employee Name: ");
		name=in.nextLine();
		System.out.print("Enter the Employee Age: ");
		age=in.nextByte();
	}
	public void putData(){
		System.out.println("EMP NO    :"+empno);
		System.out.println("EMP NAME  :"+name);
		System.out.println("EMP AGE   :"+age);
	}
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		Vector<EmployeeVector> e=new Vector<EmployeeVector>();
		char ch='y';
		while(ch!='N'){
			EmployeeVector temp=new EmployeeVector();
			temp.getData();
			e.add(temp);
			System.out.print("Wanna Add Anothe(Y/N): ");
			ch=(in.next()).charAt(0);
		}
		System.out.println("\n\nEmpoyee Details Are:");
		for(int i=0;i<e.size();i++){
			System.out.println("\nEmpoyee NO: "+(i+1));
			(e.get(i)).putData();
		}
	}
}