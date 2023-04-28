space = int(input("Enter a odd number : "))
while space % 2 == 0:
    space = int(input("Enter a odd number : "))
space = space // 2 + 1
temp = space
# space = 5
for i in range(1, space):
    for j in range(space):
        print(" ", end="")
    for j in range(i):
        print("* ", end="")
    space -= 1
    print()
space = 1
for i in range(temp, 0, -1):
    for j in range(space):
        print(" ", end="")
    for j in range(i):
        print("* ", end="")
    space += 1
    print()

