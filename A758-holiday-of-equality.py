input()
a = map(int, raw_input().split())
a.sort()
total = 0
for i in a:
	total += a[len(a)-1] - i
print total
	
