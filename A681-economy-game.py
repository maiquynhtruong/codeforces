n = input()
for a in range(n / 1234567 + 1):
	for b in range(n / 123456 + 1):
		t = n - 1234567 * a - 123456 * b
		# print 'a=', a, 'b=', b, 't=', t
		if t >= 0 and t % 1234 == 0: 
			print 'YES'
			exit(0)
print 'NO'
