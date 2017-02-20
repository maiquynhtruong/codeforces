n, m = map(int, raw_input().split())
for i in range(n):
    s = raw_input()
    if 'C' in s or 'M' in s or 'Y' in s:
        print '#Color'
        exit(0)
print '#Black&White'
