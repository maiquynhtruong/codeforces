#include <bits/stdc++.h>
using namespace std;
int n, t, speed, inf = 1000000009, cnt = 0, speedLim = inf, noOvertake = 0;
vector<int> speedLims;
vector<pair<int, int> > events;
int main() {
// 	ifstream cin("input.inp");
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		if (t == 1) {
			cin >> speed;
		} else if (t == 2) {
			if (noOvertake > 0) cnt += noOvertake;
			noOvertake = 0;
		} else if (t == 3) {
			cin >> speedLim;
			speedLims.push_back(speedLim);
		} else if (t == 4) {
			noOvertake = 0;
		} else if (t == 5) {
			speedLims.clear();
		} else if (t == 6) {
			noOvertake++;
		}
		while (!speedLims.empty() && speed > speedLims.back()) {
			cnt++;
			speedLims.pop_back();
		}
		// cout << i << " " << cnt << "\n";
	}
	cout << cnt << "\n";
}
