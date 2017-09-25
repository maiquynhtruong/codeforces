
 #include <bits/stdc++.h> 
using namespace std;
bool debug = false;
int n, m, b[20], p[20];
bool vis[20];
set<long long> s;
void tryPlate(int bell, int plate, long long left, long long right) {
	if (left == right) {
		s.insert(b[bell] + left + right);
		// return;
	}

	for (int i = plate+1; i <= m; i++) {
		if (vis[i] == false) {
			vis[i] = true;
			if (debug) cout << b[bell] << " " << left << " " << right << " trying " << p[i] << "\n";
			tryPlate(bell, i, left + p[i], right);
			tryPlate(bell, i, left, right + p[i]);
			vis[i] = false;
		}
	}
}
int main() {
// 	ifstream cin("barbells.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	cin >> b[i];
    }
    for (int i = 1; i <= m; i++) {
    	cin >> p[i];
    } 
    sort(p, p+m);
    if (debug) for (int i = 1; i <= m; i++) { cout << p[i] << " "; }
    if (debug) cout << "\n";
    for (int i = 1; i <= n; i++) {
    	// for (int j = 1; j <= m; j++) {
    		// vis[j] = true;
    	s.insert(b[i]);
    	// cout << "bar " << b[i] << ":\n";
    	// vis[1]=true;
		// tryPlate(i, p[1], 0);
		// tryPlate(i, 0, p[1]);
		tryPlate(i, 0, 0, 0);
    		// vis[j] = false;
    	// }
    }
    for (set<long long>::iterator iter = s.begin(); iter != s.end(); ++iter) {
    	cout << *iter << "\n";
    } 
}
