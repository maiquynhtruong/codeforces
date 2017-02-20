import Queue
f = open('input.txt')
n = int(f.readline())
c = f.readline().split()
q = Queue.Queue()
q.put(c)
v = set([tuple(c)])
while not q.empty():
    c = q.get()
    print 'd=', list(c)
    if len(c) == 1:
        print 'YES'
        break
    for i in [-2,-4]:
        if len(c) >= -i and (c[i][0] == c[-1][0] or c[i][1] == c[-1][1]):
            d = list(c)
            d[i+1] = d.pop()
            if tuple(d) not in v:
                v.add(tuple(d))
                q.put(d)
else:
    print 'NO'

