num = int(input("Enter the number "))
digit = int(input("Enter the digit "))
temp = num
count = 0
while num != 0:
    r = num % 10
    if digit == r:
        count += 1

    num //= 10

print(f"{digit} occurs {count} times {temp} ")
