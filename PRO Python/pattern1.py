for i in range(0, 4):
    for j in range(0, 4):
        if j <= i:
            print("*", end="")
        else:
            print(" ", end="")
    print()