import bisect
n = input()
x = sorted(map(int, raw_input().split()))
q = input()
for i in range(q):
	print bisect.bisect(x,input())
