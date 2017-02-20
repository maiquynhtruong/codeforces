# http://codeforces.com/contest/667/submission/17585769
str = raw_input().strip()
str = str[::-1]
str = 'MAI' + str
ans = [] # empty dictionary
strlen = len(str) - 3
dp2 = [0] * (strlen + 3)
dp3 = [0] * (strlen + 3)
dp2[3] = 1
dp3[3] = 1
for n in range(5, strlen-1):
    if dp3[n-2] == 1:
        dp2[n] = 1
        ans.append(str[n-2:n][::-1])
    elif dp2[n-2] == 1 and str[n-4:n-2] != str[n-2:n]:
        dp2[n] = 1
        ans.append(str[n-2:n][::-1])
    if n > 5:
        if dp2[n-3] == 1:
            dp3[n] = 1
            ans.append(str[n-3:n][::-1])
        elif dp3[n-3] == 1 and str[n-6:n-3] != str[n-3:n]:
            dp3[n] = 1
            ans.append(str[n-3:n][::-1])

ans = set(ans)
print len(ans)
print ("\n".join(sorted(ans)))
