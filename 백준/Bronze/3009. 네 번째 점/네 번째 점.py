a=[]
b=[]
for i in range(3) :
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

if a.count(a[0]) == 1 :
    print(a[0],end=' ')
elif a.count(a[1]) == 1:
    print(a[1],end=' ')
else :
    print(a[2],end=' ')

if b.count(b[0]) == 1 :
    print(b[0])
elif b.count(b[1]) == 1:
    print(b[1])
else :
    print(b[2])

