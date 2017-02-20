t = map(int, raw_input().split())
m = 0
for i in range(5):
# delete doubles
	for j in range(i+1, 5):
		if t[i] == t[j]: m = max(m, 2 * t[i])
	
for i in range(5):
# delete doubles
	for j in range(i+1, 5):
		for k in range(j+1, 5):
			if t[i] == t[j] and t[j] == t[k]: m = max(m, 3 * t[i])
print sum(t) - m
