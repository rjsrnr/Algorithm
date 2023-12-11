num = int(input())
b = num
for i in range(2,num+1) :
    while b%i == 0 :
            b = b // i
            print(i)

if b == 2 :
      print(2)