num = int(input())
x = list(map(int,input().split()))
a = []

for i in range(num) :
    if x[i] != 1:
        for t in range(2,x[i]) :
            if x[i]%t == 0 :
                a.append(x[i])

if 1 in x :
    x.remove(1)

for i in range(len(a)) :
    if a[i] in x :
        x.remove(a[i])
print(len(x))