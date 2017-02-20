# l1 r1  l2 r2  k
# 1  100 50 200 75 -> 50
# 1  10  9  20  1 -> 2
# 6   6  5  8   9 -> 1
# 5  100 8  8   8 -> 0
l1, r1, l2, r2, k = map(int, raw_input().split())
l, r = max(l1, l2), min(r1, r2)
time = r - l + 1
if k <= r and k >= l: time -= 1
if time > 0: print time
else: print 0
