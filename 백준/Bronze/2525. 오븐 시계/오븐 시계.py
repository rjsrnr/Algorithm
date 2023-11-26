h,m = map(int,input().split())
add = int(input())

h = h+add//60
m= m+add%60

if m>=60 :
    h = h+1
    m = m-60
if h>23 :
    h = h-24

print(h,m)