for x in range(501):
    p = x
    s = 0
    while x != 0:
        r = x % 10
        s = s + r**3
        x = x // 10
    if s == p:
        print(s)








