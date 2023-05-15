### Program to implement calculator in Python 3
### Author: Prathamesh Patil
while True:    
    print("<<<MENU>>>")     # Displaying the menu to the user
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exponentiation")
    print("6. Exit")
    choice = int(input("Enter the choice: "))       # Taking choice as input
    if choice!=6:                                               # Taking number inputs if choice is not exit
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))
    if choice == 1:                                             # Performing specified operation
        print("Addition =",num1+num2)
    elif choice == 2:
        print("Subtraction =",num1-num2)
    elif choice == 3:
        print("Multiplication =",num1*num2)
    elif choice == 4:
        print("Division =",num1/num2)
    elif choice == 5:
        print("Exponentiation =",num1**num2)
    elif choice == 6:                                       # Break out of the loop if choice is 6 i.e. Exit
        break
    
print("Thank You!")                                     # Final Greeting
        
