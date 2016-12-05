l = list(raw_input())
v = ['A', 'E', 'I', 'O', 'U', 'Y']
m = 0
last = -1
for i in range(len(l)):
	if l[i] in v: 
		m = max(m, i - last)
		last = i
print max(m, len(l) - last)
