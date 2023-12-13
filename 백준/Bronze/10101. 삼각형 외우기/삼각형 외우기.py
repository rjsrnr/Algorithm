a = int(input())
b = int(input())
c = int(input())

if a+b+c != 180 :
    print('Error')
elif a == b and a == c and c == b :
    print('Equilateral')
elif a != b and a != c and b != c :
    print('Scalene')
else :
    print('Isosceles')