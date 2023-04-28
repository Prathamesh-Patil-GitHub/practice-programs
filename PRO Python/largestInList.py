List1 = [10, 20, 30, 40, 50, 100]
lar = List1[0]
for i in List1:
    if i > lar:
        lar = i

print(f"Largest of {List1} are {lar}")
