#include <iostream>
using namespace std;
#define N 200005
int n, q, m, a[N], t[N], l[N], r[N], b[105], ind;
int main() {
	cin >> n >> q >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= q; i++) cin >> t[i] >> l[i] >> r[i];
	for (int i = 1; i <= m; i++) {
		cin >> ind;
		// cout << ind << " ";
		for (int j = q; j >= 1; j--) {
			if (ind < l[j] || ind > r[j]) continue;
			if (t[j] == 1) {
				if (ind == l[j]) ind = r[j];
				else ind = ind-1;
			} else {
				ind = r[j] - (ind-l[j]);
			}
		}
		cout << a[ind] << " ";
	}
	return 0;
}
