n, k =  map(int, raw_input().split())
a = list(map(int, raw_input().split()))
i = 1
while k > i:
    k -= i
    i += 1
print a[k-1]
