def power(x, y):
    if y == 0:
        return 1
    if y == 1:
        return x
    return x * power(x, y-1)

base = eval(input("Enter the base value "))
index = eval(input("Enter the index value "))
print(f"{base}^{index} = {power(base,index)}")
