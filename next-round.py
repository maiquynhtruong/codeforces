# CF 158A
# http://ideone.com/AnIsJT
n, k = map(int, raw_input().split())
a = map(int, raw_input().split())
print len([a[i] for i in range(len(a)) if a[i] > k])
