n = int(raw_input())
a = list(raw_input())
sign = []
c = 0
for i in range(len(a)):
	s = 0
	if a[i] == '<':
		if i - 1 >= 0 and a[i] == a[i-1]: s = sign[i-1] - 1
		else: s = -1
	elif a[i] == '>':
		if i - 1 >= 0 and a[i] == a[i-1]: 
			s = sign[i-1] + 1
		else: s = 1
	sign.append(s)
	if sign[i] < 0 and abs(sign[i]) == i + 1: c = c + 1
if sign[n-1] > 0 and sign[n-sign[n-1]] == 1: c = c + sign[n-1]
print c
