n,m=map(int,input().split())
n_list=[0]*n

for _ in range(m) :
    i,j,k = map(int,input().split())
    for x in range(i-1,j) :
        n_list[x] = k

for i in range(0,n) :
    print(n_list[i],end=" ")