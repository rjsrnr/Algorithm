alph = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
x = input()
time = 0
for i in range(0,len(x)) :
    for t in range(0,len(alph)):
        if x[i] in alph[t] :
            time = time+3+t
            
print(time)