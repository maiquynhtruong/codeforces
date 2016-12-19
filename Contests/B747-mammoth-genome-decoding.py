n = input()
s = list(raw_input())
# s = list(string)
# print s
if n % 4 > 0: print '==='
else:
	a, c, g, t = s.count('A'), s.count('C'), s.count('G'), s.count('T')
	if (a > n/4) or (c > n/4) or (g > n/4) or (t > n/4): 
		print '==='
	else:
		ind = [i for i, x in enumerate(s) if x == '?']
		for i in ind:
			if a < n/4: s[i], a = 'A', a+1
			elif c < n/4: s[i], c = 'C', c+1
			elif g < n/4: s[i], g = 'G', g+1
			elif t < n/4: s[i], t = 'T', t+1
		print ''.join(s)
