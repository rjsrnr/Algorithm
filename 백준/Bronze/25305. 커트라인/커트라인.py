x,y = map(int,input().split())
a = list(map(int,input().split()))
a.sort(reverse = True)

print(a[y-1])