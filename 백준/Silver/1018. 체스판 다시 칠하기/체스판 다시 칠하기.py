y, x = map(int, input().split())
a = []
a1 = []

for _ in range(y):
    a.append(str(input()))

for i in range(y - 7):
    for j in range(x - 7):
        x1 = 0    # 짝수줄 wb, 홀수줄 bw
        x2 = 0    # 짝수줄 bw, 홀수줄 wb

        for p in range(i, i + 8):
            for q in range(j, j + 8):
                if (p + q) % 2 == 0:    # 짝수합
                    if a[p][q] != 'W':
                        x1 += 1
                    if a[p][q] != 'B':
                        x2 += 1
                else:    # 홀수합
                    if a[p][q] != 'B':
                        x1 += 1
                    if a[p][q] != 'W':
                        x2 += 1

        a1.append(x1)
        a1.append(x2)

print(min(a1))