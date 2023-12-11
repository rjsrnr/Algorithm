xmin = int(input())
xmax = int(input())
a = []

for i in range(xmin,xmax+1) :
    x = 0
    
    for t in range(2,i) :
        if i%t == 0 :
            x+= 1
    if x == 0 :
        a.append(i)
if 1 in a :
    a.remove(1)

if len(a) == 0 :
    print(-1)
else :
    print(sum(a))
    print(min(a))


