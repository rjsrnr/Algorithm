num = int(input())
x = []

for _ in range(100) :
    row = []
    for _ in range(100) :
        row.append(0)
    x.append(row)

for _ in range(num) :
    a,b = map(int,input().split())

    for i in range(a,a+10) :
        for j in range(b,b+10) :
            x[i][j] = 1

count = 0
for i in range(100) :
    count += x[i].count(1)

print(count)