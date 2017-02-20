n, m, k = map(int, raw_input().split())
c = k % (2 * m)
# print c
if c != 0: print k / (2 * m) + 1,
else: print k / (2 * m),
if c == 0: print m, 'R'
else: 
	if c % 2 == 0: print c / 2, 'R'
	else: print c / 2 + 1, 'L'

# Best solution
m,n,k = map(int, raw_input().split())
c = (k-1) / (2*m)
r = (k-1) % (2*m) / 2
if k % 2 == 0: print c+1, r+1, 'R'
else: print c+1, r+1, 'L'
