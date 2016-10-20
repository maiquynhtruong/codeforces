input()
s = raw_input().replace(')', '(').split('(')
inside = False
num = 0
maxL = 0
for t in s:
    for l in t.split('_'):
        if inside:
            if len(l) > 0: num = num + 1
        else:
            maxL = max(maxL, len(l))
    inside = not inside
print maxL, num
