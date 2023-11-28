t = int(input())
x = str(input())

x_list = []
for i in range(0,t) :
    x_list.append(int(x[i]))

print(sum(x_list))