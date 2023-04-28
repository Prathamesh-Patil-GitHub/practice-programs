print("Enter the matrix")
a = []
while True:
    row = [int(x) for x in input().split()]
    if not row:
        break
    a.append(row)

col = len(a[0])

for row in a:
    if col != len(row):
        print("The given data is not proper to be considered as a matrix :(")
        break
else:
    print(f"The dimensions of the matrix are {len(a)} X {col}")
