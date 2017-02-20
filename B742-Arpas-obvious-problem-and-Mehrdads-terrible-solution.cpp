// Looked at http://codeforces.com/contest/742/submission/22768938 for idea
#include <iostream>
using namespace std;
// long long x,i,n,d,a,cnt[1000009];
long long cnt[1000009];
int main() {
	long long n, x;
	cin >> n >> x;
	long long ans = 0, a = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ans += cnt[a ^ x];
		cnt[a]++;
	}
	cout << ans << endl;
	return 0;
}
