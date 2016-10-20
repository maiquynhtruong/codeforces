import sys
#import string

n = int(raw_input())
row = []
for i in range(n):
    row.append(raw_input())
for i in range(n):
    if 'OO' in row[i]:
        print 'YES'
        for j in range(n):
            if i != j: print row[j]
            else:
                row[j] = row[j].replace('OO', '++', 1)
                print row[j]
        sys.exit()
print 'NO'
