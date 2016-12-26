n, h = map(int, raw_input().split())
a =  map(int, raw_input().split())
t = 0
for i in a:
	if i > h: t += 2
	else: t += 1
print t
