/// Author: Prathamesh Patil

import java.util.*;

interface Vehicle{
	void changeGear(int gear);
	void speedUp(int speed);
	void applyBrakes(int brake);
	void display();
}

class Bicycle implements Vehicle{
	static final int MAX_GEAR = 3;
	static final int MAX_SPEED = 30;
	int gear, speed, id;
	
	Bicycle(int id){
		this.id = id;
		this.gear = 0;
		this.speed = 0;
	}
	
	int getSpeed() {
		return this.speed;
	}
	
	int getGear() {
		return this.gear;
	}
	
	public void changeGear(int gear) {
		if(gear>=0 && gear <= MAX_GEAR) {
			this.gear = gear;
		}
		else if(gear<0) {
			this.gear = 0;
		}
		else {
			this.gear = MAX_GEAR;
		}
	}
	
	public void speedUp(int speed) {
		if(speed>=0 && speed <= MAX_SPEED) {
			this.speed = speed;
		}
		else if(speed<0) {
			this.speed = 0;
		}
		else {
			this.speed = MAX_SPEED;
		}
	}
	
	public void applyBrakes(int speed) {
		speedUp(speed);
	}
	
	public void display() {
		System.out.println("<<< BICYCLE DASHBOARD >>>");
		System.out.println(">> ID    : "+this.id);
		System.out.println(">> SPEED : "+this.speed);
		System.out.println(">> GEAR  : "+this.gear);
	}
}

class Bike implements Vehicle{
	static final int MAX_GEAR = 5;
	static final int MAX_SPEED = 120;
	int gear, speed, id;
	
	Bike(int id){
		this.id = id;
		this.gear = 0;
		this.speed = 0;
	}
	
	int getSpeed() {
		return this.speed;
	}
	
	int getGear() {
		return this.gear;
	}
	
	public void changeGear(int gear) {
		if(gear>=0 && gear <= MAX_GEAR) {
			this.gear = gear;
		}
		else if(gear<0) {
			this.gear = 0;
		}
		else {
			this.gear = MAX_GEAR;
		}
	}
	
	public void speedUp(int speed) {
		if(speed>=0 && speed <= MAX_SPEED) {
			this.speed = speed;
		}
		else if(speed<0) {
			this.speed = 0;
		}
		else {
			this.speed = MAX_SPEED;
		}
	}
	
	public void applyBrakes(int speed) {
		speedUp(speed);
	}
	
	public void display() {
		System.out.println("<<< BIKE DASHBOARD >>>");
		System.out.println(">> ID    : "+this.id);
		System.out.println(">> SPEED : "+this.speed);
		System.out.println(">> GEAR  : "+this.gear);
	}
}

class Car implements Vehicle{
	static final int MAX_GEAR = 6;
	static final int MAX_SPEED = 220;
	int gear, speed, id;
	
	Car(int id){
		this.id = id;
		this.gear = 0;
		this.speed = 0;
	}
	
	int getSpeed() {
		return this.speed;
	}
	
	int getGear() {
		return this.gear;
	}
	
	public void changeGear(int gear) {
		if(gear>=0 && gear <= MAX_GEAR) {
			this.gear = gear;
		}
		else if(gear<0) {
			this.gear = 0;
		}
		else {
			this.gear = MAX_GEAR;
		}
	}
	
	public void speedUp(int speed) {
		if(speed>=0 && speed <= MAX_SPEED) {
			this.speed = speed;
		}
		else if(speed<0) {
			this.speed = 0;
		}
		else {
			this.speed = MAX_SPEED;
		}
	}
	
	public void applyBrakes(int speed) {
		speedUp(speed);
	}
	
	public void display() {
		System.out.println("<<< CAR DASHBOARD >>>");
		System.out.println(">> ID    : "+this.id);
		System.out.println(">> SPEED : "+this.speed);
		System.out.println(">> GEAR  : "+this.gear);
	}
}


public class InterfaceImplementation {
	
	private static int getChoice() {
		Scanner in = new Scanner(System.in);
		System.out.println(">>> 1. Increase Speed");
		System.out.println(">>> 2. Gear up");
		System.out.println(">>> 3. Apply Brakes");
		System.out.println(">>> 4. See Dashboard");
		System.out.println(">>> 5. Back to Garage");
		return in.nextInt();
	}
	
	public static void main(String [] args) {
		Scanner in = new Scanner(System.in);
		int choice;
		do {
			System.out.println("<<<   M A I N  M E N U   >>>");
			System.out.println(">>> 1. Ride your Bicycle 🚲");
			System.out.println(">>> 2. Ride your Bike 🏍");
			System.out.println(">>> 3. Drive your Car 🚗");
			System.out.println(">>> 4. Exit from the Garage 🏃‍♂️");
			System.out.println("So, what did you decide? : ");
			choice = in.nextInt();
			
			switch(choice) {
				case 1:{
						Bicycle obj = new Bicycle(100);
						System.out.println("Twink Twink 🚲! Bicycle has been unlocked 🔑🔓");
						int innerChoice;
						do {
							System.out.println("<<< Bicycle 🚲 MENU >>>");
							innerChoice = getChoice();
							switch(innerChoice) {
								case 1: 
									obj.speedUp(obj.getSpeed()+5);
									System.out.println("Pedal moved !");
									break;
								case 2:
									obj.changeGear(obj.getGear()+1);
									System.out.println("Geared Up !");
									break;
								case 3:
									obj.applyBrakes(obj.getSpeed()-5);
									System.out.println("Screeeeech !");
									break;
								case 4:
									obj.display();
									break;
								case 5:
									System.out.println("Reached Garage");
									break;
								default: 
									System.out.println("Take correct decisions !!!");
							}
						}while(innerChoice != 5);
						break;
					}
				case 2:{
						Bike obj = new Bike(200);
						System.out.println("Vroom vroom 🏍! Bike has been unlocked 🔑🔓");
						int innerChoice;
						do {
							System.out.println("<<< Bike 🏍 MENU >>>");
							innerChoice = getChoice();
							switch(innerChoice) {
								case 1: 
									obj.speedUp(obj.getSpeed()+10);
									System.out.println("Vrooom !");
									break;
								case 2:
									obj.changeGear(obj.getGear()+1);
									System.out.println("Geared Up !");
									break;
								case 3:
									obj.applyBrakes(obj.getSpeed()-10);
									System.out.println("Screeeeech !");
									break;
								case 4:
									obj.display();
									break;
								case 5:
									System.out.println("Reached Garage");
									break;
								default: 
									System.out.println("Take correct decisions !!!");
							}
						}while(innerChoice != 5);
						break;
					}
				case 3:{
					Car obj = new Car(300);
					System.out.println("Stutututu 🚗! Car has been unlocked 🔑🔓");
					int innerChoice;
					do {
						System.out.println("<<< Bike 🚗 MENU >>>");
						innerChoice = getChoice();
						switch(innerChoice) {
							case 1: 
								obj.speedUp(obj.getSpeed()+20);
								System.out.println("Vrooom !");
								break;
							case 2:
								obj.changeGear(obj.getGear()+1);
								System.out.println("Geared Up !");
								break;
							case 3:
								obj.applyBrakes(obj.getSpeed()-20);
								System.out.println("Screeeeech !");
								break;
							case 4:
								obj.display();
								break;
							case 5:
								System.out.println("Reached Garage");
								break;
							default: 
								System.out.println("Take correct decisions !!!");
						}
					}while(innerChoice != 5);
					break;
					}
				case 4:
					System.out.println("BACK TO HOME 🏚 (OS)");
					break;
				default:
					System.out.println("You don't have this vehicle in your garage! Please select an existing vehicle!");
					break;
				}
		}while(choice != 4);
	}
}
