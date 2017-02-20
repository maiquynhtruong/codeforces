n = raw_input()
m = {'b':'d', 'd':'b', 'p': 'q', 'q':'p'}
s = ['A', 'H', 'I', 'M', 'O', 'o', 'T', 'U', 'V', 'v', 'W', 'w', 'X', 'x', 'Y']
l = len(n)
for i in range(l/2+1):
    if (n[i] in m and n[l-i-1] == m[n[i]]) or (n[i] in s and n[l-i-1] == n[i]):
        continue
    else:
        print 'NIE'
        exit()
print 'TAK'
