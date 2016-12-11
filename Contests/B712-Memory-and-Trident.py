s = list(raw_input())

if len(s) % 2 == 0:
	h, v = 0, 0
	for c in s:
		if c == 'R': h += 1
		elif c == 'L': h -= 1
		elif c == 'U': v += 1
		else: v -= 1
	if (abs(v) + abs(h)) % 2 == 0: print (abs(v) + abs(h)) / 2
	else: print -1
else: print -1
