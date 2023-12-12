x,y,w,h = map(int,input().split())

a = w-x
b = h-y
l = [a,b,x,y]
print(min(l))