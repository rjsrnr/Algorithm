import  sys

a = int(input())
b = []
for _ in range(a) :
    b.append(int(sys.stdin.readline()))

b.sort()

for i in range(a) :
    print(b[i])