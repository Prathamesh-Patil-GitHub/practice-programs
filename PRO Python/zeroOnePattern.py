for i in range(7, 0, -2):
    for j in range(7-i):
        print(" ", end="")
    k = 1
    for j in range(i):
        print(f"{k} ", end="")
        k = 0 if k == 1 else 1

    print()
