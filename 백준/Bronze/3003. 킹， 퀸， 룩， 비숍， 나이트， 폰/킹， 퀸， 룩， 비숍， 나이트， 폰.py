x=list(map(int,input().split()))
a=[1,1,2,2,2,8]

for i in range(0,6) :
    if x[i] == a[i] :
        print(0,end=' ')
    else :
        print(a[i]-x[i],end = ' ')