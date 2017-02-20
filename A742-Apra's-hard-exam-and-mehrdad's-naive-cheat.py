n = int(raw_input())
if n == 0: print 1
elif n == 1: print 8
else:
	last = [4, 2, 6, 8]
	print last[(n-2) % 4]
