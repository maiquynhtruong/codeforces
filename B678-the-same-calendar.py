y = input()
def lastDay(n):
	l = 365
	if (n % 4 == 0 and n % 100 != 0) or (n % 400 == 0): l += 1
	return l
c = p = lastDay(y)
m = 0
while True:
	m = (m + p) % 7
	y += 1
	p = lastDay(y)
	if m == 0 and p == c: break
print y
