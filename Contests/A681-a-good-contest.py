n = input()
for i in range(n):
	name, before, after = raw_input().split()
	before, after = int(before), int(after)
	if before >= 2400:
		if after - before > 0:
			print 'YES'
			exit(0)
print 'NO'
