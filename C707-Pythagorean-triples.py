n = input()
if n < 3: print -1
else:
	if n % 2 == 1:
		b = (n*n - 1) / 2
		a = b + 1
		print a, b
	else:
		b = n*n / 4 - 1
		a = b + 2
		print a, b
