"""
The following program takes a string as input and sorts it in such a way,
that the alphabets will be sorted before the numbers.
"""
s = input("Enter the string: ")
alpha = ""
num = ""
for ch in s:
    if ch.isalpha():
        alpha += ch

    if ch.isdigit():
        num += ch

sortedString = "".join(sorted(alpha) + sorted(num))
print(f"The sorted string is: {sortedString}")
