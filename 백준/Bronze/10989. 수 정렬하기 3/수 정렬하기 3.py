import sys
input = sys.stdin.readline

a = int(input())
b = [0]*10001

for _ in range(a) :
    c = int(input())
    b[c] += 1

for i in range(10001) :
    if b[i] != 0 :
        for j in range(b[i]) :
            print(i)