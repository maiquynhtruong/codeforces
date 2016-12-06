# http://codeforces.com/contest/735/problem/C
n = int(raw_input())
n1 = 1
n2 = 2
fib = 1
while n2 <= n:
	t = n1
	n1 = n2
	n2 = t + n2
	fib = fib+1
print fib-1

	
