n = input()
m, c = 0, 0
for i in range(n):
	a, b = map(int, raw_input().split())
	if a > b: m += 1
	elif b > a: c += 1
if m > c: print 'Mishka'
elif m < c: print 'Chris'
else: print 'Friendship is magic!^^'
