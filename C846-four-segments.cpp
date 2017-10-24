#include <bits/stdc++.h>
using namespace std;
#define LL long long
int n, f, s, t;
LL a[5005];
int main() {
	// ifstream cin("input.inp");
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n; 
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i-1];
	}
	for (int i = 0; i <= n; i++) {
		int j = i;
		for (int k = i; k <= n; k++) {
			if (a[j] > a[k]) j = k;
			// cout << a[j]-a[k]+a[i] << "\n";
			if (a[k]-a[j]+a[i] > a[t]-a[s]+a[f]) {
				t = k; s = j; f = i;
			}
		}
		
	}
	cout << f << " " << s << " " << t << "\n";
}
