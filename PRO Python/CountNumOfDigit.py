num = int(input("enter the number"))
dig = int(input("enter the digit"))
t = num
count = 0
while num != 0:
    r = num % 10
    if r == dig:
        count += 1
    num = num // 10
print(f"{dig} occurs {count} times in {t}")
