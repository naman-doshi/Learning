from itertools import combinations
t = int(input())
ccs = []
for i in range(t):
    ccs.append(tuple(map(int, input().split())))

min_diff = 1000000000

for i in range(1, t+1):
    for c in combinations(ccs, i):
        sour = 1
        bitter = 0
        for j in c:
            sour *= j[0]
            bitter += j[1]
        min_diff = min(min_diff, abs(sour-bitter))

print(min_diff)