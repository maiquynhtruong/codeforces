# http://codeforces.com/contest/735/problem/A
n, k = map(int, raw_input().split())
c = list(raw_input())
gr = c.index('G')
ins = c.index('T')
dis = abs(gr-ins)
if dis < k: print 'NO'
else:
	for i in range(k, dis+1, k):
		if ins > gr and c[gr+i] == '#': 
			#print 'NO', '1'
			break
		if ins < gr and c[gr-i] == '#':
			#print 'NO', '2'
			break
	if i == dis: 
		print 'YES'#, '3'
	elif i < dis:
		print 'NO'#, '4'
	