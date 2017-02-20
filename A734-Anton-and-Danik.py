# http://ideone.com/h3ynNk
raw_input()
g = list(raw_input())
a = g.count('A') 
d = g.count('D')
if a == d: print 'Friendship'
elif a > d: print 'Anton'
else: print 'Danik' 
