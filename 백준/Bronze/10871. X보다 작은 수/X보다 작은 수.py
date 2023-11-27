x,y = map(int,input().split())
n_list=list(map(int,input().split()))

for i in range(0,x) :
    if y > n_list[i] :
        print(n_list[i],end=" ")
