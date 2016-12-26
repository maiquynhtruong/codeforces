
 s = raw_input()
t = raw_input()
swap = {}
correct = []
for i in range(len(s)):
	# print t[i], s[i]
	if s[i] != t[i]:
		if s[i] in correct or t[i] in correct: 
			print -1
			exit(0)
		if t[i] not in swap and s[i] not in swap: 
			swap[t[i]] = s[i]
			swap[s[i]] = t[i]
			# print swap
		if (s[i] in swap and swap[s[i]] != t[i]) or (t[i] in swap and swap[t[i]] != s[i]):
			print -1
			exit(0)
	else:
		if t[i] in swap or s[i] in swap: 
			print -1
			exit(0)
		else: correct.append(s[i])
print len(swap) / 2
for i in set(s):
	if i in swap and swap[i] != -1: 
		print i, swap[i]
		swap[swap[i]] = -1
   
