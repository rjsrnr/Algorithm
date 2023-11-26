x=int(input())
y=int(input())
A = [x,y]
if A[0]>0 and A[1]>0 :
    print(1)
elif A[0]<0 and A[1]>0 :
    print(2)
elif A[0]<0 and A[1]<0 :
    print(3)
else:
    print(4)