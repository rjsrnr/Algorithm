a_max1,a_max2 = 0,0
x,y =0,0

for i in range(1,10) :
    a = list(map(int,input().split()))
    a_max1 = max(a)
    if a_max1 >= a_max2 :
        a_max2 = a_max1
        x = i
        y = a.index(a_max1)
print(a_max2)
print(x,y+1)

