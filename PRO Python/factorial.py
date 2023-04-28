n = int(input("Enter the number "))
f = 1
for i in range(1, n+1):
    f *= i

print(f"The factorial of {n} is {f}")