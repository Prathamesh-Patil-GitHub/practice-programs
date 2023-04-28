import java.util.*;
class EmployeeDetails{

	private String name;
	private int emp_no;
	private double salary;

	public void getData(){
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the emp_no");
		emp_no=in.nextInt();
		System.out.println("Enter the name");
		name=in.next();
		System.out.println("Enter the salary");
		salary=in.nextDouble();
	}
	public double returnSalary(){
		return salary;
	}
	public static void main(String[] args){
		EmployeeDetails[] e=new EmployeeDetails[5];
		double avg=0;
		System.out.println("Enter employee details:");
		for(int i=0;i<e.length;i++){
			e[i]=new EmployeeDetails();
			System.out.println("Enter data for Employee No."+(i+1));
			e[i].getData();
			avg=avg+e[i].returnSalary();
		}
		avg=(double)avg/e.length;
		System.out.println("\n\n\nAverage Salary of all Employees = "+avg);
	}
}