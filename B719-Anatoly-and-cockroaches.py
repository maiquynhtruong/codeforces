# http://codeforces.com/blog/entry/47314
# We can notice that there are only two possible final coloring of cockroaches
# that satisfy the problem statement: rbrbrb... or brbrbr...
# Let’s go through both of these variants.
# In the each case let's count the number of red and black cockroaches which are
# not standing in their places. Let's denote these numbers as x and y. Then it is 
# obvious that the min(x, y) pairs of cockroaches need to be swapped and the rest 
# should be repaint.
# In other words, the result for a fixed final coloring is exactly 
# min(x, y) + max(x, y) - min(x, y) = max(x, y). The final answer for the problem 
# is the minimum between the answers for the first and the second colorings.
s = [0] * 4
m = 0
input()
a = list(raw_input())
for i in a:
	s[m | ((i != 'r') << 1)] += 1
	m = not m
print s
print min(max(s[0], s[3]), max(s[1], s[2]))
