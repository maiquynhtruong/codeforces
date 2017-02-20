# CF 731A
s = raw_input()
s = map(ord, list(s))
a = ord('a')
z = ord('z')
cur = a
total = 0
for i in s:
    if cur < i: total += min(i - cur, cur - a + z - i + 1)
    elif cur > i: total += min(cur - i, i - a + z - cur + 1)
    cur = i
print total
