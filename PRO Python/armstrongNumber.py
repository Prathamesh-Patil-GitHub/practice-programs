num = int(input("Enter the number "))
temp=num
s = 0
while num != 0:
    r = num % 10
    s = s + r**3
    num //= 10

if temp == s:
    print(f"{temp} is an armstrong number")
else:
    print(f"{temp} is not an armstrong number")