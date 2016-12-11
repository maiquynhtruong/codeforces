k, r = map(int, raw_input().split())
for i in range(1, 10):
	if (k * i - r) % 10 == 0 or (k * i) % 10 == 0: 
		print i
		exit(0)
print 10
