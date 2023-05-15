noOfPeople = int(input("Enter the number of people: "))
isBussiness = bool(int(input("Enter 1 for business and 0 for personal: ")))
isSeniorCitizen = bool(int(input("Enter 1 if Senior Citizen, 0 otherwise: ")))
isDelux = bool(int(input("Enter 1 for Deluxe room and 0 for Executive: ")))

amount = 0
if isDelux:
    amount = 2000
else:
    amount = 5000

if noOfPeople == 1:
    pass
elif noOfPeople == 2:
    amount += 2500
elif noOfPeople == 3:
    amount += 3500
elif noOfPeople == 4:
    amount += 4500
else:
    amount += 4500
    amount += (noOfPeople-4)*1000

if isSeniorCitizen and isBussiness:
    isSeniorDiscount = bool(int(input("You have 2 discounts, select any one: Enter 1 for Senior Citizen and 2 for Business Trip Discount: ")))
    if isSeniorDiscount:
        amount = amount-(amount*0.15)
    else:
        amount = amount-(amount*0.2)
elif isSeniorCitizen:
    amount = amount-(amount*0.15)
elif isBussiness:
    amount = amount-(amount*0.2)

print("Final Payable Amount:",amount) 

        
