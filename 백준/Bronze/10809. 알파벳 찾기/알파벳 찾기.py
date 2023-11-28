st = input()
a = ord('a')
z = ord('z')
en=[]

for i in range(a,z+1) :
    en.append(chr(i))
    
s=len(en)

for t in range(0,s) :
    print(st.find(en[t]),end=' ')