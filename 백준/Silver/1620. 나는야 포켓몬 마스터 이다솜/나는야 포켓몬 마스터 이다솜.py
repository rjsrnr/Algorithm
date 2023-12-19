import sys
input = sys.stdin.readline

x,y = map(int,input().split())
a={}

for i in range(x) :
    b = input().rstrip()
    a[i] = b
    a[b] = i

for i in range(y) :
    c = input().rstrip()
    if c in a :
       t = a[c] + 1
       print(t)
    else :
        c= int(c)-1
        print(a[c])