n, n1, n2 = map(int, raw_input().split())
w = map(int, raw_input().split())
w.sort(reverse=True)
if n1 > n2: n1, n2 = n2, n1
print '{0:.9f}'.format(sum(w[:n1]) / (n1*1.0) + sum(w[n1:(n1+n2)]) / (n2*1.0))
