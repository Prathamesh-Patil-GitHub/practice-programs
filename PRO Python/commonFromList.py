list1 = [10, 15, 20, 40, 2, 54, 33, 1]
list2 = [110, 115, 120, 40, 2, 54, 55]

print("List 1: ", list1, end="\n\n")
print("List 2: ", list2, end="\n\n")
print("Common elements are: ", end=" ")
for i in list1:
    for j in list2:
        if i == j:
            print(j, end=" ")

