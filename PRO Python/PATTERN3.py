space = 5
for i in range(1, 6):
    for j in range(space):
        print(" ", end="")

    for j in range(i):
        print("* ", end="")

    space -= 1
    print()

