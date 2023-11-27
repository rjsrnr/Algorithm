t = int(input())

for i in range(1,t+1) :
    x,y = map(int,input().split())
    add = x+y
    print("Case #%d: %d" %(i,add))