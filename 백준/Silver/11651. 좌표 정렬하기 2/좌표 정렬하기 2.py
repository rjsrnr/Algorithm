import sys
input = sys.stdin.readline
a = int(input())
b = []
for _ in range(a) :
    [x,y] = map(int,input().split())
    b.append([y,x])
b.sort()

for i in b :
    print(i[1],i[0])