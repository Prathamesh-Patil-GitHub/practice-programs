s = 5
for i in range(1, 5):
    for j in range(i):
        d = s
        for k in range(d, 0, -1):
            print(" ", end="")
        s -= 1
        print("*", end="")
    print()