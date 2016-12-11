n = input()
s = list(raw_input())
cnt = 0
k = 0
cntA = []
for i in range(n):
	if s[i] == 'W':
		if i > 0 and s[i-1] == 'B': 
			cntA.append(cnt)
			cnt = 0
			k += 1
	else: cnt += 1
if s[n-1] == 'B':
	k += 1
	cntA.append(cnt)
print k
for i in range(len(cntA)): print cntA[i],
