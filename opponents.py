n, d = map(int, raw_input().split())
schedule = []
count, max_count = 0, 0
for i in range(d):
    schedule.append(raw_input())
loss = ''
for i in range(n):
    loss = loss + '1'
loss = int(loss)
for i in range(d):
    if int(schedule[i]) < loss:
        count = count + 1
    else:
        if max_count < count:
            max_count = count
        count = 0
print max(max_count, count)

