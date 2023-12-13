while True :
    a,b,c = map(int,input().split())
    
    if a == b == c == 0 :
        break
    x = [a,b,c]
    x_max = max(x)
    x_sum = sum(x)/2

    if x_max >= x_sum :
        print('Invalid')
    else :
        if a == b == c:
            print('Equilateral')
        elif a != b and a != c and b!= c :
            print('Scalene')
        else : 
            print('Isosceles')