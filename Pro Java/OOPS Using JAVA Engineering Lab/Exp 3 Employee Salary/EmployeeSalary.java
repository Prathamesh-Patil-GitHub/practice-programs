/// Author: Prathamesh Patil

import java.util.*;

abstract class Employee{
	protected String name, address, mail, mobile;
	protected int id;
	
	public Employee(int id, String name, String address, String mail, String mobile){
		this.id = id;
		this.name = name;
		this.address = address;
		this.mail = mail;
		this.mobile = mobile;
	}
	
	public abstract void generatePaySlip();
}


class Programmer extends Employee{
	protected double basic_pay, da, hra, pf;
	Programmer(int id, String name, String address, String mail, String mobile, double basic_pay){
		super(id, name, address, mail, mobile);
		this.basic_pay = basic_pay;
		this.da = basic_pay*0.1;
		this.hra = basic_pay*0.12;
		this.pf = basic_pay*0.001;
	}
	public void generatePaySlip() {
		System.out.println("<<<< Programmer's Salary Slip >>>>");
		System.out.println("----------------------------------------");
		System.out.println(">> Emp ID: "+this.id);
		System.out.println(">> Name: "+this.name);
		System.out.println(">> Mobile: "+this.mobile);
		System.out.println(">> Gross Salary: "+(basic_pay+da+hra+pf));
		System.out.println(">> NetSalary: "+(basic_pay+da+hra));
	}
}

class TeamLead extends Employee{
	protected double basic_pay, da, hra, pf;
	TeamLead(int id, String name, String address, String mail, String mobile, double basic_pay){
		super(id, name, address, mail, mobile);
		this.basic_pay = basic_pay;
		this.da = basic_pay*0.1;
		this.hra = basic_pay*0.12;
		this.pf = basic_pay*0.001;
	}
	public void generatePaySlip() {
		System.out.println("<<<< Team Lead's Salary Slip >>>>");
		System.out.println("----------------------------------------");
		System.out.println(">> Emp ID: "+this.id);
		System.out.println(">> Name: "+this.name);
		System.out.println(">> Mobile: "+this.mobile);
		System.out.println(">> Gross Salary: "+(basic_pay+da+hra+pf));
		System.out.println(">> NetSalary: "+(basic_pay+da+hra));
	}
}
class AssistantProjectManager extends Employee{
	protected double basic_pay, da, hra, pf;
	AssistantProjectManager(int id, String name, String address, String mail, String mobile, double basic_pay){
		super(id, name, address, mail, mobile);
		this.basic_pay = basic_pay;
		this.da = basic_pay*0.1;
		this.hra = basic_pay*0.12;
		this.pf = basic_pay*0.001;
	}
	public void generatePaySlip() {
		System.out.println("<<<< Assistant Project Manager's Salary Slip >>>>");
		System.out.println("----------------------------------------");
		System.out.println(">> Emp ID: "+this.id);
		System.out.println(">> Name: "+this.name);
		System.out.println(">> Mobile: "+this.mobile);
		System.out.println(">> Gross Salary: "+(basic_pay+da+hra+pf));
		System.out.println(">> NetSalary: "+(basic_pay+da+hra));
	}
}
class ProjectManager extends Employee{
	protected double basic_pay, da, hra, pf;
	ProjectManager(int id, String name, String address, String mail, String mobile, double basic_pay){
		super(id, name, address, mail, mobile);
		this.basic_pay = basic_pay;
		this.da = basic_pay*0.1;
		this.hra = basic_pay*0.12;
		this.pf = basic_pay*0.001;
	}
	public void generatePaySlip() {
		System.out.println("<<<< Project Manager's Salary Slip >>>>");
		System.out.println("----------------------------------------");
		System.out.println(">> Emp ID: "+this.id);
		System.out.println(">> Name: "+this.name);
		System.out.println(">> Mobile: "+this.mobile);
		System.out.println(">> Gross Salary: "+(basic_pay+da+hra+pf));
		System.out.println(">> NetSalary: "+(basic_pay+da+hra));
	}
}

public class EmployeeSalary {
	public static void main(String[] args) {
		Employee emp;
		int choice;
		Scanner in = new Scanner(System.in);
		do{
			System.out.println("< < < < G E N E R A T E   P A Y   S L I P > > > >");
			System.out.println("1. | Programmer");
			System.out.println("2. | Team Lead");
			System.out.println("3. | Assistant Project Manager");
			System.out.println("4. | Project Manager");
			System.out.println("5. | Exit");
			System.out.print("Enter your choice : ");
			choice = in.nextInt();
			
			String name, mail, address, mobile;
			int emp_id;
			double basic_pay;

			System.out.print("Enter the Employee ID: ");
			emp_id = in.nextInt();
			in.nextLine();
			System.out.print("Enter the Employee Name: ");
			name = in.nextLine();
			System.out.print("Enter the Employee Mail ID: ");
			mail = in.nextLine();
			System.out.print("Enter the Employee Address: ");
			address = in.nextLine();
			System.out.print("Enter the Employee Mobile: ");
			mobile = in.nextLine();
			System.out.print("Enter the Employee Basic Pay: ");
			basic_pay = in.nextDouble();
			
			switch(choice) {
			case 1: 
				emp = new Programmer(emp_id, name, address, mail, mobile, basic_pay);
				emp.generatePaySlip();
				break;
			case 2:
				emp = new TeamLead(emp_id, name, address, mail, mobile, basic_pay);
				emp.generatePaySlip();
				break;
			case 3:
				emp = new AssistantProjectManager(emp_id, name, address, mail, mobile, basic_pay);
				emp.generatePaySlip();
				break;
			case 4:
				emp = new ProjectManager(emp_id, name, address, mail, mobile, basic_pay);
				emp.generatePaySlip();
				break;
			case 5:
				System.out.println("Shutting Down...");
				break;
			default:
				System.out.println(">> Invalid Choice");
			}
			
			System.out.println("\n\n\n\n");
			
		}while(choice != 5);
		in.close();
		
	}
}