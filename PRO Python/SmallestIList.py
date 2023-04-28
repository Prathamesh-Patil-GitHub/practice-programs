List1 = [1, 10, 20, 30, 40, 50, 100]
small = List1[0]
for i in List1:
    if i < small:
        small = i

print(f"Largest of {List1} are {small}")
