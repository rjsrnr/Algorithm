import sys

time = int(input())
i = 1
while i<=time :
    i = i+1
    x,y = map(int,sys.stdin.readline().split())
    print(x+y)