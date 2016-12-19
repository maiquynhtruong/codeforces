import math
n = input()
f = int(math.floor(math.sqrt(n)))
# s = f + 1
while n % f > 0:
	f -= 1
	# print f
print f, n / f
