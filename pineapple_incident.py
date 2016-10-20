t, s, x = map(int, raw_input().split())
if x < t:
    print 'NO'
else:
    m = x - t
    if m % s == 0 or ((m-1) % s == 0 and m != 1):
        print 'YES'
    else:
        print 'NO'
