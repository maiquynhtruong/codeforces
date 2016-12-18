l = raw_input()
s = set()
s.add(l)
n = len(l)
for i in range(1, n):
	t = l[n-i:] + l[:n-i]
	# print t
	if t not in s: s.add(t)
print len(s)
