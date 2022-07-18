n, x, y = map(int, input().split(" "))
b = 1
r = 0

for _ in range(n-1):
    b = r + b * y
    r = r + b * x

print(r)