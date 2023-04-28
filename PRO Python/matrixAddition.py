print("Enter the dimensions of matrices ")
r, c = [int(x) for x in input().split()]
print("Enter matrix - 1 ")
m1 = []
for i in range(r):
    row = [int(x) for x in input().split()]
    m1.append(row)

print("Enter matrix - 2")
m2 = []
for i in range(r):
    row = [int(x) for x in input().split()]
    m2.append(row)

m3 = []
for i in range(r):
    row = [m1[i][j] + m2[i][j] for j in range(c)]
    m3.append(row)

print("The addition of matrices is: ")
for row in m3:
    for x in row:
        print(x, end="\t")
    print()
