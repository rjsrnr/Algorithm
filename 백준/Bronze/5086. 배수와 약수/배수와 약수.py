while True :
    try :
        a,b = map(int,input().split())
        if a%b == 0 :
            print('multiple')
        elif b%a == 0 :
            print('factor')
        elif a == 0 and b == 0 :
            break
        else : 
            print('neither')
    except :
        break