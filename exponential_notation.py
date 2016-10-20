#1234 -> 1.234E3
#1.234 -> 1.234
#12.34 -> 1.234E1
#.001234 -> 1.234E-3
#.001 -> 1E-3
#.1234 -> 1.234E-1
#.1 -> 1E-1
#1000 -> 1E4
#1 -> 1

n = raw_input().lstrip('0').rstrip('.')
if '.' in n:
    dot = n.index('.')
    n = n.strip('0')
    l = len(n)
    if dot == 0:
        n = n.replace('.', '').lstrip('0')
        n = n[0] + '.' + n[1:].rstrip('0')
        n = n.rstrip('.') + 'E' + str(len(n) - l - 1)
    else:
        dot = dot - 1
        n = n.replace('.', '')
        n = n.strip('0')
        if dot > 0:
            n = n[0] + '.' + n[1] + 'E' + str(dot)
else:
    l = len(n)
    if l > 1:
        ll = len(n.rstrip('0'))
        if ll < l:
            n = n.rstrip('0') + 'E' + str(l - ll)
        else:
            n = n[0] + '.' + n[1:].rstrip('0') + 'E' + str(l-1)
print n
