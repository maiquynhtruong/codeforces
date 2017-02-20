a = input()
b = input()
c = input()
for i in reversed(range(1,a+1)):
	if 2 * i <= b and 4 * i <= c:
		print 7 * i
		exit(0)
print 0
