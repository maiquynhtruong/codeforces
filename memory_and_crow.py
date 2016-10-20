l = input()
a = map(int, raw_input().split())
b = [0] * l
b[l-1] = a[l-1]
for i in range(l-1):
    b[i] = a[i] + a[i+1]
    print b[i],
print b[l-1]
