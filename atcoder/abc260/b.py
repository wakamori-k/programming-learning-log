N_MAX = 1000

n, x, y, z = list(map(int, input().split(" ")))
math = list(map(int, input().split(" ")))
eng = list(map(int, input().split(" ")))
p = [[i+1, math[i], eng[i]] for i in range(n)]

ans = []
p.sort(key=lambda e: e[1], reverse=True)
ans += list(map(lambda x: x[0], p[:x]))
p = p[x:]
p.sort(key=lambda e: e[0])

p.sort(key=lambda e: e[2], reverse=True)
ans += list(map(lambda x: x[0], p[:y]))
p = p[y:]
p.sort(key=lambda e: e[0])

p.sort(key=lambda e: e[1]+e[2], reverse=True)
ans += list(map(lambda x: x[0], p[:z]))

ans.sort()
for a in ans:
    print(a)
