import sys
input = sys.stdin.readline

num = int(input())
a = list(map(int,input().split()))
c = list(set(a))
c_len = len(c)
c.sort()
b = {}

for i in range(c_len) :
    b[c[i]] = i

for i in a :
    print(b[i],end =' ')