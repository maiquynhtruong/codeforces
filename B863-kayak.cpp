#include <bits/stdc++.h>
using namespace std;
int n, w[105], a[105], total = 10000000, subT = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= 2*n; i++) cin >> w[i];
	for (int i = 1; i <= 2*n; i++) {
		for (int j = i+1; j <= 2*n; j++) {
			subT = 0;
			vector<int> v;
			for (int k = 1; k <= 2*n; k++) {
				if (k != i && k != j) v.push_back(w[k]);
			}
			sort(v.begin(), v.end());
			for (int k = 1; k < v.size(); k+=2) {
				subT += v[k] - v[k-1];
			}
			total = min(total, subT);
		}
	}
	cout << total << "\n";
	return 0;
}
