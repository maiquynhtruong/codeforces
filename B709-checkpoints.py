n, a = map(int, raw_input().split())
x = map(int, raw_input().split())
x.sort()
if n == 1: print 0
else: print min(min(abs(x[-1] - a), abs(x[1] - a)) + x[-1] - x[1], min(abs(x[-2] - a), abs(x[0] - a)) + x[-2] - x[0])
