#include <bits/stdc++.h> 
#define LL long long
using namespace std;
int test, n, k, d;
LL a[100005];
int main() {
	cin >> test;
	while (test--) {
		cin >> n >> k;	
		int ans = k;
		set<LL> next, cur;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= k; i++) { cur.insert(a[i]);}
		for (int i = k+2; i <= n; i++) { next.insert(a[i]);}
		set<LL> diff;
 
		for (int i = k+1; i <= n; i++) {
			// cout << a[i] << "\n";
			next.erase(a[i]); if (i+k <= n) next.insert(a[i+k]); //diff.clear();
			// cout << "cur: "; for (set<LL>::iterator it = cur.begin(); it != cur.end(); it++) { cout << *it << " ";} cout << "\n";
			// cout << "next: "; for (set<LL>::iterator it = next.begin(); it != next.end(); it++) { cout << *it << " ";} cout << "\n";
			if (cur.find(a[i]) == cur.end()) {
				// set_difference(cur.begin(), cur.end(), next.begin(), next.end(), inserter(diff, diff.end()));
				// if (!diff.empty()) d = *(diff.begin()); else d = *(cur.end());
				d = *(cur.end());
				for (set<LL>::iterator it = cur.begin(); it != cur.end(); it++) {
					if (next.find(*it) == next.end()) { d = *it; break;}
				}
				// cout << "diff: "; for (set<LL>::iterator it = diff.begin(); it != diff.end(); it++) { cout << *it << " ";} cout << "\n";
				cur.erase(d); cur.insert(a[i]);
				ans++;
			}
		}
 
		cout << ans << "\n";
	}
	return 0;
}
