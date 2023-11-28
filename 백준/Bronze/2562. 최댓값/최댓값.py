a=[]
while True:
    try:
        b = int(input())
        a.append(b)
    except :
        break

print(max(a))
x = len(a)
for i in range(0,x) :
    if a[i] == max(a) :
        print(i+1)