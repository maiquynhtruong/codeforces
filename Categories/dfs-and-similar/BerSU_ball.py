# CF 489B
# http://ideone.com/LxWF6C
n = int(raw_input())
a = map(int, raw_input().split())
a.sort()
m = int(raw_input())
b = map(int, raw_input().split())
b.sort()
p = 0
ca, cb = 0, 0
while ca < n and cb < m:
	if abs(a[ca] - b[cb]) <= 1: 
		p += 1
		ca, cb = ca + 1, cb + 1
	else:
		if b[cb] > a[ca] + 1: ca = ca + 1
		elif a[ca] > b[cb] + 1: cb = cb + 1
	# print 'ca=', a[ca], ', cb=', b[cb]
print p
	
