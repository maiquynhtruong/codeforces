n = input()
a = map(int, raw_input().split())
m = 0
for i in a:
	if m > i:
		break
	m ^= i & 1 # is carry over. If ith day's pizzas has to be bought with coupon, 
  # add that to carry-over. If carry over is 2, then can be bought with discount, otherwise has to be bought with coupons
	# m = (i - m) % 2 # does the same thing
print ['YES', 'NO'][m]
