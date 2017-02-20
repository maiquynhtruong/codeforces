s = raw_input().strip()
ad, b = s.split('e')
ad += '0' * 250
b = int(b)
i = ad.index('.')
ad = ad.replace('.', '')
i += b
ad = (ad[0:i] + '.' + ad[i:]).rstrip('0').rstrip('.')
print ad
