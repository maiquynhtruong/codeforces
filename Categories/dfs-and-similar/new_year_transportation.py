# CF 500A
# http://ideone.com/EitERj
n, t = map(int, raw_input().split())
a = map(int, raw_input().split())
cur = 1
cell = []
while cur < n:
	cell.append(cur)
	cur = cur + a[cur-1]
cell.append(cur)
print cell
if t in cell: print 'YES' 
else: print 'NO'
