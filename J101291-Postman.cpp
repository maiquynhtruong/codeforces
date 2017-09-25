#include <bits/stdc++.h> 
using namespace std;
bool debug = false;
int n, k, x, m, remaining = 0;
long long total;
vector<pair<int, int>> house;
int main() {
// 	ifstream cin("postman.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    house.push_back(make_pair(0, 0));
    for (int i = 1; i <= n; i++) {
    	cin >> x >> m;
    	if (debug) cout << x << " " << m << "\n";
    	house.push_back(make_pair(x, m));
    } 
    sort(house.begin(), house.end());
    if (debug) cout << "\n";
    if (debug) for (int i = 0; i <= n; i++) cout << house[i].first << " " << house[i].second << "\n";
    remaining = 0;
    if (debug) cout << "\n";
    for (int i = n; i >= 0 && house[i].first > 0; i--) {
		// cout << house[i].first << " " << house[i].second/k << " " << house[i].second%k << " " << remaining << "\n";
    	if (house[i].second > k) {
    		long long times = house[i].second/k;
    		long long distance = house[i].first;
    		total += 2*times*distance;
    	}
    	// cout << "total= " << total << "\n";/
    	house[i].second %= k;
		// if (house[i].second > 0) 
		if (house[i].second > 0) {// && remaining > house[i].second) {
			// total += 2*house[i].first;
			if (remaining >= house[i].second) {
				remaining -= house[i].second;
				if (remaining == 0) remaining = k;
				house[i].second = 0;	
			} else {
				house[i].second -= remaining;
				total += 2*house[i].first;
				remaining = k - house[i].second; 
			}
		} 
		// cout << "total= " << total << "\n";
    }
    remaining = 0;
    for (int i = 0; i <= n && house[i].first < 0; i++) {
		if (debug) cout << house[i].first << " " << house[i].second/k << " " << house[i].second%k << " " << remaining << "\n";
    	if (house[i].second > k) {
    		long long times = house[i].second/k;
    		long long distance = house[i].first;
    		total += -2*times*distance;
    	}
    	house[i].second %= k;
		if (house[i].second > 0) {// && remaining > house[i].second) {
			// total += 2*house[i].first;
			if (remaining >= house[i].second) {
				remaining -= house[i].second;
				if (remaining == 0) remaining = k;
				house[i].second = 0;	
			} else {
				house[i].second -= remaining;
				total += -2*house[i].first;
				remaining = k - house[i].second; 
			}
		} 
		if (debug) cout << "total= " << total << "\n";
    }
    cout << total << "\n";
}
