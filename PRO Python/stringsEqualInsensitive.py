"""
The following program will check whether two strings are equal or not, without case sensitivity
"""
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

if str1.lower() == str2.lower():
    print(f"{str1} and {str2} are equal with case insensitivity")
else:
    print(f"{str1} and {str2} are not equal with case insensitivity")