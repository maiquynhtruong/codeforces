n, a, b = map(int, raw_input().split())
com = map(int, list(raw_input()))
cost = 100000
a, b = min(a-1, b-1), max(a-1, b-1)
# print a, b
if a == b or (com[a] == com[b]): cost = 0
else:
	for i in range(a+1, b+1):
		if com[i] != com[a]:
			cost = 1
			break
print cost
