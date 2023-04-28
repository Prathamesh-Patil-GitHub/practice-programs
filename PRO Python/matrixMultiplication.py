print("Enter dimensions of first matrix")
r1, c1 = [int(x) for x in input().split()]
print("Enter dimensions of second matrix")
r2, c2 = [int(x) for x in input().split()]
while c1 != r2:
    print("The given dimensions are not compatible for matrix multiplication")
    print("Enter dimensions of first matrix")
    r1, c1 = [int(x) for x in input().split()]
    print("Enter dimensions of second matrix")
    r2, c2 = [int(x) for x in input().split()]

print("Enter first matrix ")
a = []
for i in range(r1):
    row = [int(x) for x in input().split()]
    a.append(row)

print("Enter second matrix ")
b = []
for i in range(r2):
    row = [int(x) for x in input().split()]
    b.append(row)

c = [[0 for j in range(c2)] for i in range(r1)]
for i in range(r1):
    for j in range(c2):
        for k in range(c1):
            c[i][j] = c[i][j] + a[i][k] * b[k][j]

print("The multiplication matrix is :")
for row in c:
    for x in row:
        print(x, end="\t")
    print()
