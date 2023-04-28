num = int(input("enter the term "))
x = 0
y = 1
s = 0
print("0\t1", end=" ")
for num in range(num - 2):
    s = x + y
    print(s, end="\t ")
    x = y
    y = s

