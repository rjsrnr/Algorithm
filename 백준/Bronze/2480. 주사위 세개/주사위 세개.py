a,b,c = map(int,input().split())

t=[a,b,c]
s=set(t)
if len(s)==3 :
    t.sort()
    money = t[2]*100
elif len(s) ==2 :
    t.sort()
    money = t[1]*100+1000
else :
    t.sort()
    money = t[0]*1000+10000
print(money)