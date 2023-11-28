t= int(input())

for _ in range(t) :
    x,y = map(str,input().split())
    x=int(x)
    a = len(y)
    b=''
    for i in range(0,a) :
        b= b+y[i]*x
    print(b)
