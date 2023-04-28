import java.util.*;
class Student{

	private int roll_no;
	private String name;
	private double percentage;

	public void getData(){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter roll_no of the Student");
		roll_no=in.nextInt();
		System.out.println("Enter name of the Student");
		name=in.next();
		System.out.println("Enter percentage of the Student");
		percentage=in.nextDouble();
	}
	public void putData(){
		System.out.println("Roll No.  ="+roll_no);
		System.out.println("Name      ="+name);
		System.out.println("Percentage="+percentage);
	}
	public static void main(String[] args){
		Student[] s = new Student[3];
		for(int i=0;i<s.length;i++){
			System.out.println("Enter Information of Student No."+(i+1));
			s[i]=new Student();
			s[i].getData();
		}
		System.out.println("\n\nStudent Information is:\n______________________________________________________________");
		for(int i=0;i<s.length;i++){
			System.out.println("\nStudent No."+(i+1));
			s[i].putData();
		}
	}
}

