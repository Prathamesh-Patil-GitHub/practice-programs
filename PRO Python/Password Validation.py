import re

def checkUsername(email):
    regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
    return re.fullmatch(regex, email)

def checkPassword(password):
    regex = "^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$"
    return re.fullmatch(regex, password)

def validate(username, password):
    userValid = checkUsername(username)
    passValid = checkPassword(password)

    if userValid and passValid:
        print("Login Successful !")
    elif len(password) < 6 or len(password) > 12:
        print( "Password length should be 6 to 12 characters long !")
    elif not userValid:
        print( "Enter a valid Email-ID !")
    elif not passValid:
       print("Password should contain at least 1 lowercase, 1 uppercase, 1 special symbol and 1 digit !")


username = input("Enter the username: ")
password = input("Enter the password: ")
validate(username, password)
       
