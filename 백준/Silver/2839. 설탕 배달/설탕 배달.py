a = int(input())
x = a // 5
y = a // 3
z = 0
p = []
for i in range(x,-1,-1) :
    for j in range(y,-1,-1) :
        if 5*i + 3*j == a :
            z = a
            p.append(i+j)

if z != a :
    [print(-1)]

else :
    print(min(p))