"""
The following program checks if given string is palindrome or not
"""
string = input("Enter the string: ")
if string[::] == string[::-1]:
    print(f"{string} is palindrome string")
else:
    print(f"{string} is not a palindrome string")