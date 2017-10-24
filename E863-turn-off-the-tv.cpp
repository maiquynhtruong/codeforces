#include<bits/stdc++.h>
using namespace std;
int n, ans = -1, e;
vector<pair<int, int>> v;
map<pair<int, int>, int> m;
bool comp(pair<int, int> &a, pair<int, int> &b) {
	if (a.first == b.first) return a.second > b.second;
	else return a.first < b.first;
}
int main() {
// 	ifstream cin("turn-off-the-tv.in");
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int l, r;
		cin >> l >> r;
		v.push_back(make_pair(l, r));
		m[make_pair(l, r)] = i;
	}
	sort(v.begin(), v.end(), comp);
	for (int i = 1; i < n-1; i++) {
		// cout << v[i].first << ", " << max(e, v[i-1].second)+1 << ", " << v[i].second << ", " << min(e, v[i+1].first)-1 << "\n";
		if (v[i].second <= v[i-1].second || v[i-1].second >= v[i+1].first-1) {
				ans = m[make_pair(v[i].first, v[i].second)];
		}
		// cout << v[i].first << " " << v[i].second << ", e= " << e << "\n";
	}
	if (n > 1 && v[n-1].second <= v[n-2].second) { ans = m[make_pair(v[n-1].first, v[n-1].second)]; }
	cout << ans << "\n";
	return 0;
}
