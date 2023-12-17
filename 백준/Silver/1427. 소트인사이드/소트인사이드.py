a = int(input())
b = [0]*10
x = str(a)
x_len = len(x)
for i in range(x_len) :
    y = int(x[i])
    b[y] += 1

for i in range(9,-1,-1) :
    if b[i] != 0 :
        for _ in range(b[i]) :
            print(i,end = '')