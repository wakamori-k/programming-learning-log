n, k = map(int, input().split(" "))
pp = list(map(int, input().split(" ")))

cards = []
ans = [-1 for _ in range(n)]

for i, p in enumerate(pp):
    left = -1
    right = len(cards)
    while right - left > 1:
        mid = (right + left) // 2
        if p <= cards[mid][-1]:
            right = mid
        else:
            left = mid

    if right < len(cards):
        cards[right].append(p)
        insert_idx = right
    else:
        cards.append([p])
        insert_idx = len(cards) - 1

    if len(cards[insert_idx]) >= k:
        for c in cards[insert_idx]:
            ans[c-1] = i + 1
        del cards[insert_idx]

print(*ans, sep="\n")
