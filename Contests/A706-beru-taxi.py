import math
a, b = map(int, raw_input().split())
n = input()
cur = 1e20
for i in range(n):
	x, y, v = map(int, raw_input().split())
	x, y = x - a, y - b
	cur = min(cur, math.sqrt(x*x + y*y) / v)
print cur
