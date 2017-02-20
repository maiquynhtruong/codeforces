n = input()
a = map(int, raw_input().split())
a.sort()
i, c = 0, 1, 
while i < n:
	if a[i] >= c:
		a[i], i, c = c, i + 1, c + 1
	else: i = i + 1
print a[n-1] + 1
