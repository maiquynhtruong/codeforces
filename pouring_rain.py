d,h,v,e = map(int, raw_input().split())
v/= 3.141592653*d*d/4
print 'NO' if v < e else 'YES\n' + str(h/(v-e))
