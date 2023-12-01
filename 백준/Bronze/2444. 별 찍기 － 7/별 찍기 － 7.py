n = int(input())
num = 1
t = 2*n-1

for i in range(1,t+1) :
    if i < n :
        print(f"{'*'*num:^{t}}".rstrip())
        num = num +2
    elif i == n :
        print(f"{'*'*num:^{t}}".rstrip())
    else :
        num = num -2
        print(f"{'*'*num:^{t}}".rstrip())