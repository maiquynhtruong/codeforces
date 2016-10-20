n = int(raw_input())
s = {}
for i in range(n):
    temp = raw_input().strip()
    if not temp in s:
        s[temp] = 1
        print 'OK'
    else:
        print temp + `s[temp]`
        s[temp] += 1

