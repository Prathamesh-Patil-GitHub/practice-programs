temp = num = int(input("Enter the number "))

rev = 0
while num != 0:
    rem = num % 10
    rev = rev * 10 + rem
    num //= 10

print(f"The reverse of {temp} is {rev}")