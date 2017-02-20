n, m = map(int, raw_input().split())
if n > m: 
	t = n
	n, m = m, t
# print n, m
total = 0
for i in range(1, n+1):
	# print i,
	# print (m -  5 + i % 5) + 1,
	total += (m - 5 + i % 5) / 5 + 1
	# print total
print total
