n,m=map(int,input().split())

x_list = list(range(1,n+1))
y_list = x_list[:]
for _ in range(m) :
    x,y = map(int,input().split())
    x= x-1
    y= y-1
    x_list[x] = y_list[y]
    x_list[y] = y_list[x]
    y_list = x_list[:]

for i in range(0,n):
    print(x_list[i],end=" ")