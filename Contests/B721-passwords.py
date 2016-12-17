n, k = map(int, raw_input().split())
d = {}
for i in range(n):
	p = raw_input()
	if len(p) not in d: d[len(p)] = 0
	d[len(p)] += 1
m = len(raw_input())
sorted(d)
# print d
time = 0
for i in range(1, m): 
	if i in d: time += d[i]
fast = time + (time / k) * 5 + 1
slow = (time % k + d[m]) / k
if (time % k + d[m]) % k == 0: slow -= 1
# print time, time / k, time % k, slow
print fast,
print fast - 1 + d[m] + slow * 5

# As always, there exists some brilliant solutions
I=raw_input
n,k=map(int,I().split())
a=sorted(len(raw_input()) for i in range(n))
p=len(I())
t=a.index(p)
a,b=t,t+a.count(p)
print(1+a+a//k*5,b+(b-1)//k*5)
