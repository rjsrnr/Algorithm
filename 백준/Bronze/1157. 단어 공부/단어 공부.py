l = input().upper()
l_set = list(set(l))
a=[0]*len(l_set)

for i in range(0,len(l_set)) :
    a[i] = l.count(l_set[i])

b = max(a)
c = a.index(b)
if a.count(b) >= 2 :
    print('?')
else :
    print(l_set[c])