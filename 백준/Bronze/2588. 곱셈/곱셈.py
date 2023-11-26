A=int(input())
B=int(input())
b3 = B//100
b2 = (B-b3*100)//10
b1 = B-b3*100-b2*10
print(A*b1)
print(A*b2)
print(A*b3)
print(A*B)