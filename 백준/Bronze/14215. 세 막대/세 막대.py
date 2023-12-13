a,b,c = map(int,input().split())
x = [a,b,c]
x_max = max(x)
x_last = sum(x) - x_max
while x_max >= x_last :
    x_max -= 1


print(x_max+x_last)