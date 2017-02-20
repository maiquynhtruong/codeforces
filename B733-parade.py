n = int(raw_input())
k = -1
sl, sr = 0, 0
l = []
for i in range(n):
	left, right = map(int, raw_input().split())
	l.append((left, right))
	sl, sr = sl + left, sr + right
# print l
# print sl, sr
m = abs(sl - sr)
for i in range(n):
	sl, sr = sl - l[i][0] + l[i][1], sr - l[i][1] + l[i][0]
	if abs(sl - sr) > m: 
		k = i
		m = abs(sl - sr)
	sl, sr = sl - (-l[i][0] + l[i][1]), sr - (-l[i][1] + l[i][0])
print k + 1
