import sys
input = sys.stdin.readline
x = int(input())
a = list(map(int,input().split()))
c = {}

y = int(input())
b = list(map(int,input().split()))

for i in range(y) :
    c[b[i]] = 0

for i in range(x) :
    if a[i] in c :
        c[a[i]] +=1

for i in range(y) :
    if b[i] in c :
        print(c[b[i]],end=' ')
    else :
        print(0,end = ' ')
