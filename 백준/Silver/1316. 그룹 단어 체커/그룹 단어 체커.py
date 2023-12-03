x = int(input())
a = x
for _ in range(x):
    y = input()
    z = len(y)
    for t in range(0,z):
        b = y.count(y[t])
        if y[t]*b not in y :
            a = a-1
            break
print(a)