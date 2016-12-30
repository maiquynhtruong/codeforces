n, k = map(int, raw_input().split())
c = map(int, raw_input().split())
id = [int(s) - 1 for s in map(int, raw_input().split())]
t, s = 0, sum(c)
for i in id:
	x, c[i] = c[i], 0
	s -= x
	t += s * x

print (t + sum([c[i] * x for i, x in enumerate(c, -1)]))
