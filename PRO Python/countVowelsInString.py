"""
The following program counts the number of vowels present in the specified string
"""
s = input("Enter the string ")
c = 0
for ch in s:
    if ch.lower() in "aeiou":
        c += 1

print(f"{s} contains {c} vowels")
