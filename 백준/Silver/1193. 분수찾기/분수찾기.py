x = int(input())
x_list = [1]
a,b = 1,1
c = [1,1]
while x > max(x_list) :
    a = a+1
    b = b+a
    x_list.append(b)

m = max(x_list)
if x == 1 :
    c = [1,1]
    
elif len(x_list) % 2 == 1 :
    c[1] = len(x_list)
    z = m-x
    c[0] = c[0] +z
    c[1] = c[1] -z
else :
    c[0] = len(x_list)
    z = m-x
    c[0] = c[0] -z
    c[1] = c[1] +z


print(str(c[0])+'/'+str(c[1]))