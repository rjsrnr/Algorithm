a = int(input())
b=0
for i in range(a) :
    st = str(i)
    len_st = len(st)
    for j in range(len_st) :
        b += int(st[j])
    c = b+i
    b=0
    if c == a or i ==a :
        break

if c == a :
    print(i)
else :
    print(0)
