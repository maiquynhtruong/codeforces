coor = map(int, raw_input().split())
maxC = max(coor[0], max(coor[1], coor[2]))
minD = 300
for i in range(maxC):
    if minD > abs(coor[0] - i) + abs(coor[1] - i) + abs(coor[2] - i):
        minD = abs(coor[0] - i) + abs(coor[1] - i) + abs(coor[2] -i)
print minD
