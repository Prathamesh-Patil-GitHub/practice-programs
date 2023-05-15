# Iterative Approach (Faster):
n =  int(input("Enter the number: "))
if n == 1:
    print(1)
elif n == 2:
    print(1, 1)
else:
    print(1, 1, end = " ")
    x = 1
    y = 1
    sum = x+y
    for i in range(n-2):
        print(sum, end = " ")
        x = y
        y = sum
        sum = x+y
        

"""
Recursive Approach (Slower):
def fib(n):
    if n<=2:
        return 1
    return fib(n-1) + fib(n-2)

n = int(input("Enter the number of elements: "));
print("The series is: ")

for i in range(1, n+1):
    print(fib(i), end = " ")
"""

