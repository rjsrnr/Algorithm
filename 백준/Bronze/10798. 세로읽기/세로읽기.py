word = []
length = []
result = ''

for _ in range(5) :
    a=list(input())
    word.append(a)
    length.append(len(a))

a_max = max(length)


for i in range(a_max) :
    for t in range(5) :
        if i < length[t] :
            result = result + word[t][i]

print(result)