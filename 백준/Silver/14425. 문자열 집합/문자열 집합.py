x,y = map(int,input().split())
a = set()
b = {}
for i in range(x) :
    a.add(str(input()))
for i in range(y) :
    b[i] = str(input())
coin = 0
for i in range(y) :
    if b[i] in a :
        coin +=1
print(coin)