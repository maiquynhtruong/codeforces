# http://codeforces.com/contest/670/problem/C
import collections
n = int(raw_input())
a = list(map(int, raw_input().split())) # languages
m = int(raw_input())
b = list(map(int, raw_input().split())) # audio
c = list(map(int, raw_input().split())) # subs
counter = collections.Counter(a)
arr = sorted([(counter[b[i]], counter[c[i]], i) for i in xrange(m)])
print arr[-1][2] + 1
