a,b,c = map(int,input().split())
z = c-a
i = z // (a-b)
if z%(a-b) == 0 :
    print(i+1)
else :
    print(i+2)