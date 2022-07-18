from collections import Counter
s = input()
c = Counter(s)

ans = -1
for k, v in c.items():
    if v == 1:
        ans = k
        break
print(ans)