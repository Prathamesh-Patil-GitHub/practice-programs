password = input("Enter the password: ")
    
while True:
    if len(password)>=6 and len(password)<=12:
        isDigit = False
        isChar = False
        isSpecial = False
        for char in password:
            if char.isdigit():
                isDigit = True
            elif char.isalpha():
                isChar = True
            else:
                isSpecial = True

        if isDigit and isChar and isSpecial:
            print("Password is accepted")
            break
        else:
            password = input("Enter a valid password: ")
                
    else:
        password = input("Enter a valid password: ")
        
