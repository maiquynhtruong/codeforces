n = raw_input().split('e')
a = n[0].split('.')[0]
d = n[0].split('.')[1]
b = int(n[1])
length = len(a+d)
dot = n[0].index('.')
n[0].replace('.', '')
dot = dot + b
d = d + '0'*200
ans = a + d
ans = ans[:dot] + '.' + ans[dot:]
ans = ans.rstrip('0').rstrip('.').lstrip('0')
if len(ans) == 0 or ans[0] == '.':
    ans = '0' + ans
print ans

