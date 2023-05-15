n = int(input("Enter the number of rows: "))

spaces = n//2
stars = 1

for i in range(n//2):
    print(" "*spaces, end="")
    print("*"*stars)
    stars += 2
    spaces -=1
    
    
for i in range(n//2+1):
    print(" "*spaces, end="")
    print("*"*stars)
    stars -= 2
    spaces += 1

