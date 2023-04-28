n = int(input("How many rows do you want? "))
while n % 2 == 0:
    print("Please enter an odd number to proceed :)")
    n = int(input("Enter number of rows: "))

space = n//2
offset = 1
for i in range(1, n+1):
    for j in range(space):
        print(" ", end="")

    for j in range(offset):
        print("* ", end="")
    if i <= n//2:
        space -= 1
        offset += 1
    else:
        space += 1
        offset -= 1
    print()
