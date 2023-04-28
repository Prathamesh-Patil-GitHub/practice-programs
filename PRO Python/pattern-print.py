for i in range(0,4):
    for j in range(0,7):
        if j<=i+3 and j>=3-i:
            print("*",end="")
        else:
            print(" ",end="")
    print()
