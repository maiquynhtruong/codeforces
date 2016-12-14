n, k = map(int, raw_input().split())
# note how the positions of 1 are all odd positions
# 1, 2, 1, 3, 1, 2, 1, 4, 1, 2,   1,  3,  1,  2, 1
# 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
#    2     3     2     4     2        3       2
i = 1
while k % 2 == 0:
	i += 1
	k /= 2
print i
