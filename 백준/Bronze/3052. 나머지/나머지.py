num=10
a=[]

for _ in range(10) :
    x=int(input())
    y=x%42
    a.append(y)

z=set(a)
print(len(z))