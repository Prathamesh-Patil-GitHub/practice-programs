temp = num = int(input("Enter the number "))

summation = 0
while num != 0:
    rem = num % 10
    summation = summation + rem
    num //= 10

print(f"The sum of digits of {temp} is {summation}")