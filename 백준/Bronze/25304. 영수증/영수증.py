total_price=int(input())
total_num=int(input())
total = 0

for i in range(1,total_num+1):
    price,num = map(int,input().split())
    total = total + price*num
if total == total_price :
    print("Yes")
else:
    print("No")