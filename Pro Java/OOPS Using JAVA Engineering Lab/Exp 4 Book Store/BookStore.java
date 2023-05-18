/// Author: Prathamesh Patil

import java.util.*;

class Publication{
	private String title;
	private double price;
	private int copies;
	
	Publication(){
		this.title = "";
		this.price = 0.0;
		this.copies = 0;
	}
	
	// Function to sell copies, it will reduce number of copies
	int sellCopy(int numOfCopies) {
		if(numOfCopies > this.copies) {
			return 0;
		}
		else {
			this.copies = this.copies - numOfCopies;
			return numOfCopies;
		}
	}
	
	int getCopies() {
		return this.copies;
	}
	
	void setCopies(int numOfCopies) {
		this.copies = numOfCopies;
	}
	
	double getPrice(){
		return this.price;
	}
	
	// Read the data for publication object
	void readPublicationData() {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the title: ");
		this.title = in.nextLine();
		System.out.print("Enter the Price: ");
		this.price = in.nextDouble();
		System.out.print("Enter the Number of Copies: ");
		this.copies = in.nextInt();
		
		in.close();
	}
	
	// Display the data inside publication object
	void displayPublicationData() {
		System.out.println("Title            : "+this.title);
		System.out.println("Price            : "+this.price);
		System.out.println("Number of Copies : "+this.copies);
	}
}

class Book extends Publication{
	private String author;
	
	// Read the data for Publication and Book object
	void readBook() {
		Scanner in = new Scanner(System.in);
		this.readPublicationData();
		System.out.print("Enter the author: ");
		this.author = in.nextLine();
		in.close();
	}
	
	// Display the data of Publication and Book object
	void displayBook() {
		this.displayPublicationData();
		System.out.println("Author           : "+this.author);
	}
	
	// Order the copies, will reduce the number of copies inside the Publication object
	int orderCopies(int numOfCopies) {
		if(this.getCopies() < numOfCopies) {
			return 0;
		}
		else {
			this.setCopies(this.getCopies() - numOfCopies);
			return numOfCopies;
		}
	}
}

class Magazine extends Publication{
	private String currentIssue;
	
	// Read the data for Publication and Magazine object
	void readMagazine() {
		Scanner in = new Scanner(System.in);
		this.readPublicationData();
		System.out.print("Enter the Current Issue  : ");
		this.currentIssue = in.nextLine();
		in.close();
	}
	
	// Display the data of Publication and Magazine object
	void displayMagazine() {
		this.displayPublicationData();
		System.out.println("Current Issue: "+this.currentIssue);
	}
	
	
	// Receive new issue, it will change the current issue
	void receiveIssue(String newIssue) {
		this.currentIssue = newIssue;
	}
	
	// Order magazine
	int orderCopies(int numOfCopies) {
		if(this.getCopies() < numOfCopies) {
			return 0;
		}
		else {
			this.setCopies(this.getCopies() - numOfCopies);
			return numOfCopies;
		}
	}
}


public class BookStore {
	 
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int choice;
		double totalSale = 0;
		do {
			System.out.println("MAIN MENU");
			System.out.println("1. Publication");
			System.out.println("2. Book");
			System.out.println("3. Magazine");
			System.out.println("4. View Total Sale");
			System.out.println("5. Exit");
			System.out.print("Enter the choice: ");
			choice = in.nextInt();
			
			switch(choice) {
			
			case 1: {
				int innerChoice;
				Publication pub = new Publication();
			
				do {
					System.out.println("PUBLICATION MENU");
					System.out.println("1. Read Data");
					System.out.println("2. Display Data");
					System.out.println("3. Sell Copies");
					System.out.println("4. Back to Main Menu");
					System.out.print("Enter the choice: ");
					innerChoice = in.nextInt();
					switch(innerChoice) {
					case 1: pub.readPublicationData(); break;
					case 2: pub.displayPublicationData(); break;
					case 3: 
						System.out.print("Enter number of copies to sell: ");
						int num = in.nextInt();
						if(pub.sellCopy(num) > 0) {
							System.out.println("Sold "+num+" copies!");
							totalSale += pub.getPrice()*num;
						}
						else {
							System.out.println("Insufficient Amount of Stock !!!");
						}
						break;
					case 4: break;
					default: System.out.println("Invalid Choice");
					}
				}while(innerChoice != 4);
			}
			break;
			
			case 2:
			{
				int innerChoice;
				Book book = new Book();
			
				do {
					System.out.println("BOOK MENU");
					System.out.println("1. Read Book Data");
					System.out.println("2. Display Book Data");
					System.out.println("3. Order Copies");
					System.out.println("4. Back to Main Menu");
					System.out.print("Enter the choice: ");
					innerChoice = in.nextInt();
					switch(innerChoice) {
					case 1: book.readBook(); break;
					case 2: book.displayBook(); break;
					case 3: 
						System.out.print("Enter number of copies to order: ");
						int num = in.nextInt();
						if(book.orderCopies(num) > 0) {
							System.out.println("Ordered "+num+" copies!");
							totalSale += book.getPrice()*num;
						}
						else {
							System.out.println("Insufficient Amount of Stock !!!");
						}
						break;
					case 4: break;
					default: System.out.println("Invalid Choice");
					}
				}while(innerChoice != 4);
			
			}
			break;
			
			case 3:{
				int innerChoice;
				Magazine mag = new Magazine();
			
				do {
					System.out.println("MAGAZINE MENU");
					System.out.println("1. Read Magazine Data");
					System.out.println("2. Display Magazine Data");
					System.out.println("3. Provide New Issue");
					System.out.println("4. Order Magazine");
					System.out.println("5. Back to Main Menu");
					System.out.print("Enter the choice: ");
					innerChoice = in.nextInt();
					switch(innerChoice) {
					case 1: mag.readMagazine();; break;
					case 2: mag.displayMagazine();; break;
					case 3: 
						System.out.print("Enter New Issue: ");
						String newIssue = in.nextLine();
						mag.receiveIssue(newIssue);
						System.out.println("Issue updated!");
						break;
					case 4:
						System.out.print("Enter number of copies to order: ");
						int num = in.nextInt();
						if(mag.orderCopies(num) > 0) {
							System.out.println("Ordered "+num+" copies!");
							totalSale += mag.getPrice()*num;
						}
						else {
							System.out.println("Insufficient Amount of Stock !!!");
						}
						break;
					case 5: break;
					default: System.out.println("Invalid Choice");
					}
				}while(innerChoice != 5);
			}
			break;
			case 4:
				System.out.println("Total Sale: "+totalSale); 
				break;
			case 5: 
				System.out.println("Shutting Down..."); 
				break;
			default: System.out.println("Invalid Choice!");
			}
		}while(choice != 5);
	
		
		in.close();
	}
	
}
