t= int(input())
score = list(map(int,input().split()))
avg=[]
top = max(score)

for i in range(0,t):
    avg.append(score[i]/top*100)

print(sum(avg)/t)