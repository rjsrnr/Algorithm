a,b = map(int,input().split())
x = []

for i in range(1,a+1) :
    if a % i == 0 :
        x.append(i)
if len(x)>=b :
    print(x[b-1])
else :
    print(0)