# CF 740B
# http://ideone.com/LVqOYe
s=[]
n,m = map(int, raw_input().split())
a = map(int, raw_input().split())
for j in range(m):
	le, ri = map(int, raw_input().split())
	s.append(sum([a[i] for i in range(le - 1, ri)]))
s.sort()
print sum(i for i in s if i > 0)
