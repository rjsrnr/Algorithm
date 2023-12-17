a = int(input())
b = []
for _ in range(a) :
    x,y = map(str,input().split())
    x = int(x)
    b.append([x,y])

b.sort(key = lambda x:x[0])

for i in b :
    print(i[0],i[1])