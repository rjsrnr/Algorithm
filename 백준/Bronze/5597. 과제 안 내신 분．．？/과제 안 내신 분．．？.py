st=30
m = list(range(1,st+1))

for _ in range(28):
    x = int(input())
    m.remove(x)

m.sort()
print(min(m))
print(max(m))