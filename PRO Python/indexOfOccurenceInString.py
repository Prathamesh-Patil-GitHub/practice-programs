"""
The following program prints the indexes on which a specified substring occurs in a string
"""
s = input("Enter the string: ")
sub = input("Enter the substring to search: ")
start = 0
print(f"{sub} is found at following indexes in {s}: ")
while True:
    index = s.find(sub, start)
    if index == -1:
        break

    print(index, end="\t")
    start = index + 1
if start == 0:
    print("No indexes")