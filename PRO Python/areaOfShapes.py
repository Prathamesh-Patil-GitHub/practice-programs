while True:
    print("1. Area of Rectangle")
    print("2. Area of Square")
    print("3. Area of Circle")
    print("4. Area of Triangle")
    print("5. Exit")
    choice = int(input("Enter the choice: "))
    if choice == 1:
        length = float(input("Enter the length: "))
        breadth = float(input("Enter the breadth: "))
        print("Area of Rectangle:", length*breadth)
    elif choice == 2:
        side = float(input("Enter the side: "))
        print("Area of Rectangle:", side*side)
    elif choice == 3:
        radius = float(input("Enter the radius: "))
        print("Area of Rectangle:", 3.14 * radius * radius)
    elif choice == 4:
        base = float(input("Enter the base: "))
        height = float(input("Enter the height: "))
        print("Area of Rectangle:", 0.5*base*height)
    if choice == 5:
        break
print("Shutting Down...")
