n, n1, n2 = map(int, raw_input().split())
w = map(int, raw_input().split())
w.sort(reverse=True)
#print w
if n1 > n2:
	t = n2
	n2 = n1
	n1 = t
#print n1, n2
arith1 = sum([w[i] for i in range(n1)]) / (n1*1.0)
#print arith1
arith2 = sum([w[i] for i in range(n1, n2+1)]) / (n2*1.0)
#print arith2
print arith1 + arith2
