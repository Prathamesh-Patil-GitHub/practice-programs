try:
    n = int(input("Enter the number of lines: "))

    while n%2==0:
        n = int(input("Please enter an odd number: "))

except ValueError:
    print("Please enter an integer number")
    n = int(input("Enter the number of lines: "))

spaces = n//2
nums = 1
for i in range(n//2):
    print("\t"*spaces, end="")
    if nums == 1:
        print("1")
    else:
        [print(f"{x}\t",end="") for x in range(1, nums//2+2)]
        [print(f"{x}\t",end="") for x in range(nums//2, 0,-1)]
        print()
    nums += 2
    spaces -= 1

for i in range(n//2+1):
    print("\t"*spaces, end="")
    [print(f"{x}\t",end="") for x in range(1, nums//2+2)]
    [print(f"{x}\t",end="") for x in range(nums//2, 0,-1)]
    print()
    nums -= 2
    spaces += 1
