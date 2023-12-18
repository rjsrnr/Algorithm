a = int(input())
b = set(map(int,input().split()))
x = int(input())
y = list(map(int,input().split()))
for i in range(x) :
    if y[i] in b :
        print(1,end= ' ')
    else :
        print(0,end = ' ')