// http://codeforces.com/contest/837/problem/D
#include <bits/stdc++.h>
using namespace std;
int N, K, pw5[205], pw2[205], dp[205][50*205], fiveCnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
		int cur = a[i];
		while (cur % 5 == 0 && cur > 0) {
			pw5[i]++;
			cur /= 5;
		}
		while (cur % 2 == 0 && cur > 0) {
			pw2[i]++;
			cur /= 2;
		}
		fiveCnt += pw5[i];
	}	
	dp[0][0] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = min(K, i); j >= 1; j--) { // to avoid using the result of current a[i]
			// see http://codeforces.com/contest/837/submission/32120162 for more
			for (int l = pw5[i]; l <= fiveCnt; l++) {
				dp[j][l] = max(dp[j-1][l-pw5[i]] + pw2[i], dp[j][l]);
			}
		}	
	}
	for (int l = pw5[i]; l <= fiveCnt; l++)
		ans = max(ans, min(l, dp[K][l]));
	cout << ans << "\n";
}
