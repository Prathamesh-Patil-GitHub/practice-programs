def isPerfect(n):
    fact_sum = 0
    for i in range(1, n):
        if n % i == 0:
            fact_sum += i
    if fact_sum == n:
        return True
    return False

num = int(input("Enter an integer to check whether it is a perfect number or not: "))
if isPerfect(num):
    print(f"The number {num} is a Perfect Number")
else:
    print(f"The number {num} is not a Perfect Number")
