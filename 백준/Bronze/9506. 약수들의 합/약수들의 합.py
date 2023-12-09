while True :
    try :
        x = 0
        y = []
        a = int(input())
        if a == -1 :
            break

        for i in range(1,a+1) :
            if a % i == 0 and a!=i :
                x = x+i
                y.append(i)

        if x == a :
            print(str(a)+' = ',end = "")
            for i in range(len(y)-1) :
                print(y[i],end = ' + ')
            print(y[len(y)-1])
        else :
            print(f'{a} is NOT perfect.')
    except :
        break