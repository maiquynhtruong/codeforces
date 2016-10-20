'''
import re
dub = raw_input()

ans = []
if dub.find('WUB') != 0:
    ans.append(str(dub[0:dub.find('WUB')]))
indices = [m.start() for m in re.finditer('WUB', dub)]
n = len(indices)
if n == 0:
    print dub
else:
    for i in range(n-1):
        if indices[i+1] - indices[i] > 3:
            ans.append(str(dub[indices[i]+3:indices[i+1]]))

    if len(dub) - indices[n - 1] > 3:
        ans.append(dub[indices[n-1]+3:len(dub)])
    print ' '.join(ans)
'''
print raw_input().replace('WUB', ' ').strip()
