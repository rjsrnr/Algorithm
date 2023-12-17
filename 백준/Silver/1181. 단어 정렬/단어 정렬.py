a = int(input())
b = []
c = []
for _ in range(a) :
    d = str(input())
    c.append(len(d))
    b.append(d)
b = set(b)
b = list(b)
b_len = len(b)
b.sort()

for i in range(max(c)+1) :
    for j in range(b_len) :
        if len(b[j]) == i :
            print(b[j])