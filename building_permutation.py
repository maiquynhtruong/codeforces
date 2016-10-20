#http://codeforces.com/problemset/problem/285/C
n = input()
a = map(int, raw_input().split())
total = 0
a.sort()
for i in range(n):
    total += abs(a[i] - i - 1)
print total
#for i in range(len(a)):
#    if a[i] < 0:
#        total += -a[i]
#        a[i] = 0
#    elif a[i] > n:
#        total += a[i] - n
#        a[i] = n+1
#for i in range(1, n+1):
#    if i not in a:
#        if 0 in a and (n+1) in a:
#            if i < n-i: total += i
#            else: total += n - i
#        elif 0 in a: total += i
#        elif (n+1) in a: total += n - i
#print total
