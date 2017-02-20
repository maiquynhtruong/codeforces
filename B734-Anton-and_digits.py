# http://ideone.com/T0uTCO
a, b, c, d = map(int, raw_input().split())
print min(a, c, d)*256 + min(a - min(a, c, d), b)*32
