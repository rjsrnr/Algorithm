import sys
input = sys.stdin.readline
a = int(input())
b = []
for _ in range(a) :
    x = list(map(int,input().split()))
    b.append(x)
b.sort()

for i in b :
    print(i[0],i[1])