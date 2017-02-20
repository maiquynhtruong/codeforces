n = input()
a = map(int, raw_input().split())
a.sort()
# print a
m, o = a[n-1] - a[0], (a[n-1] - a[0]) / 2
# print m, o
i, j = 0, 0
while i < n:
	# print a[1], n-1, a[n-1]
	if a[i] + m - a[n-1] == 0 or a[i] - a[n-1] == 0: 
		# print i,
		i += 1
	else: break
# print i
while j < n:
	if a[j] + o == a[n-1] - o or a[j] + o == a[n-1] or a[j] == a[n-1]: j += 1
	else: break
if i < n - 1 and j < n - 1: print 'NO'
else: print 'YES'

# There's a smarter way to do anything
n = input()
a = sorted(set(map(int, raw_input().split())))
l = len(s)
print ['NO', 'YES'][t < 3 or (t == 3 and z[0] + z[2] == 2 * z[1])]
