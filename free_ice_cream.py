
n, x = map(int,raw_input().strip().split())
dis = 0
for i in range(n):
	sign, amt = raw_input().strip().split()
	amt = int(amt)
	if sign == '+': 
		x += amt
	else:
		if x >= amt:
			x -= amt;
		else:
			dis = dis + 1
print x, dis