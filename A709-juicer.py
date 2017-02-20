n, b, d = map(int, raw_input().split())
a = map(int, raw_input().split())
w, c = 0, 0
for i in a:
	if i <= b: 
		w += i
		if w > d:
			c += 1
			w = 0
print c
