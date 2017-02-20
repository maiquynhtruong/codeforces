n = input()
s = raw_input()
l = [''] * n
t = 0
for i in reversed(range((n-1)/2+1)):
	# print i
	l[i] = s[t]
	t = t+1
	# print l[i]
	if n-i-1 != i: l[n-i-1], t = s[t], t + 1
print ''.join(l)
