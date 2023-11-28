x,y = map(int,input().split())

x_list = list(range(1,x+1))

for _ in range(y) :
    a,b = map(int,input().split())
    z_list = x_list[a-1:b]
    z_list.reverse()
    for i in range(a-1,b):
        x_list[i] = z_list[i-a+1]

for i in range(0,x) :
    print(x_list[i],end=" ")
