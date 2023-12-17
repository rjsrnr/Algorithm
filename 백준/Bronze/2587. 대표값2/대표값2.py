a = []
for i in range(5) :
    a.append(int(input()))

a.sort()
a_avg = int(sum(a)/5)
print(a_avg)
print(a[2])