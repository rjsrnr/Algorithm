num = int(input())
a = {}

for i in range(num) :
    x,y = map(str,input().split())
    a[x] = y
b = []
for i in a :
    if a[i] == 'enter' :
        b.append(i)

b.sort(reverse = True)
b_len = len(b)
for i in range(b_len) :
    print(b[i])