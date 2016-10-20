# 4/10/2016
# http://codeforces.com/contest/600/problem/A

s = raw_input().replace(';',',').split(',')
a = []
b = []
for i in s:
    if i.isdigit() and (i == '0' or i[0] != '0'):
        a.append(i)
    else:
        b.append(i)
for i in a,b:
    print('"' + ','.join(i) + '"' if i else '-')
