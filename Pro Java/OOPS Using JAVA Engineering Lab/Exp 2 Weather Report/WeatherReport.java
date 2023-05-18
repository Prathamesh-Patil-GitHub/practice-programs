/// Author: Prathamesh Patil

import java.util.ArrayList;
import java.util.Scanner;

class DayReport{
	private double highTemp, lowTemp, rainAmount, snowAmount;
	private int dayOfMonth;
	
	
	public DayReport(int day, double highTemp, double lowTemp, double rainAmount, double snowAmount) {
		this.dayOfMonth = day;
		this.highTemp = highTemp;
		this.lowTemp = lowTemp;
		this.rainAmount = rainAmount;
		this.snowAmount = snowAmount;
	}
	public double getHighTemp() {
		return this.highTemp;
	}
	
	public double getLowTemp() {
		return this.lowTemp;
	}
	
	public double getRainAmount() {
		return this.rainAmount;
	}
	
	public double getSnowAmount() {
		return this.snowAmount;
	}
	
	public int getDayOfMonth() {
		return this.dayOfMonth;
	}
	
	public void setHighTemp(double temp) {
		this.highTemp = temp;
	}
	
	public void setLowTemp(double temp) {
		this.lowTemp = temp;
	}
	
	public void setRainAmount(double amount) {
		this.rainAmount = amount;
	}
	
	public void setSnowAmount(double amount) {
		this.snowAmount = amount;
	}
	
	public void setDayOfMonth(int dayOfMonth) {
		this.dayOfMonth = dayOfMonth;
	}
}

public class WeatherReport {
	private ArrayList<DayReport> list;
	public WeatherReport() {
		 this.list = new ArrayList<DayReport>();
	}
	public static void main(String [] args) {
		Scanner in = new Scanner(System.in);
		WeatherReport report = new WeatherReport();
		int choice;
		System.out.println("<<<<< W E L C O M E    T O    T H E    W E A T H E R    R E P O R T >>>>>\n\n\n");
		do {
			System.out.println("<-<-<- MENU ->->->");
			System.out.println("1. Add Day Report");
			System.out.println("2. Generate Monthly Report");
			System.out.println("3. Exit Application");
			System.out.print("Enter your choice: ");
			choice = in.nextInt();
			switch(choice) {
			case 1:
				report.addDayReport(); 
				System.out.println("Day Report Uploaded !!!");
				break;
			case 2:
				report.generateMonthlyReport();
				System.out.println("Monthly Report:");
				break;
			case 3:
				System.out.println("Shutting Down..."); break;
			default:
				System.out.println("Invalid Choice!!!"); break;
			}
		}while(choice!=3);
		System.out.println("<Terminated>");
	}
	
	private void addDayReport() {
		double highTemp, lowTemp, rainAmount, snowAmount;
		int dayOfMonth;
		
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter the day of month: ");
		dayOfMonth = in.nextInt();
		
		System.out.println("Enter the high temperature: ");
		highTemp = in.nextDouble();
		
		System.out.println("Enter the low temperature: ");
		lowTemp = in.nextDouble();
		
		System.out.println("Enter the rain amount: ");
		rainAmount = in.nextDouble();
		
		System.out.println("Enter the snow amount: ");
		snowAmount = in.nextDouble();
		
		DayReport dayReport = new DayReport(dayOfMonth, highTemp, lowTemp, rainAmount, snowAmount);
		list.add(dayReport);
		
	
	}
	private void generateMonthlyReport() {
		int numberOfReports = this.list.size();
		if(numberOfReports == 0) {
			System.out.println("Data Not Found, Please Add Some Reports First!!!");
			return;
		}
		
		double highTemp=0, lowTemp=0, rainAmount=0, snowAmount=0;
		
		for(DayReport dayReport: this.list) {
			highTemp += dayReport.getHighTemp();
			lowTemp += dayReport.getLowTemp();
			rainAmount += dayReport.getRainAmount();
			snowAmount += dayReport.getSnowAmount();
		}

		System.out.println("Average High Temperature: "+(highTemp/numberOfReports));
		System.out.println("Average Low Temperature: "+(lowTemp/numberOfReports));
		System.out.println("Average Rain Amount: "+(rainAmount/numberOfReports));
		System.out.println("Average Snow Amount: "+(snowAmount/numberOfReports));
		System.out.println("(Reported Generated On The Basis Of "+numberOfReports+" Record(s)");
		
	}
}