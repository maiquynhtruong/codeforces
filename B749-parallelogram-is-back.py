x1, y1 = map(int, raw_input().split())
x2, y2 = map(int, raw_input().split())
x3, y3 = map(int, raw_input().split())
# x1, y1 and x2, y2 is horizontal
i3, j3 = x1 + x2 - x3, y1 + y2 - y3
# x2, y2 and x3, y3 is horizontal
i1, j1 = x2 + x3 - x1, y2 + y3 - y1
# x1, y1 and x3, y3 is horizontal
i2, j2 = x1 + x3 - x2, y1 + y3 - y2
print 3
print i1, j1
print i2, j2
print i3, j3
