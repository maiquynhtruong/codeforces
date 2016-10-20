n, a, b, c, d = map(int, raw_input().split())
ls = [a+b, a+c, b+d, c+d]
print n*max(0,(n + min(ls) - max(ls)))
