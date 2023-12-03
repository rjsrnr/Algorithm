grade = {'A+':4.5,'A0':4.0,'B+':3.5,'B0':3.0,'C+':2.5,'C0':2.0,'D+':1.5,'D0':1.0,'F':0}
score = 0
num = 0

for _ in range(20) :
    x,y,z = input().split()
    y = float(y)
    if z != 'P' :
        score = y*grade[z] + score
        num = num+y
t = score/num
print(f'{t:.4f}')
    