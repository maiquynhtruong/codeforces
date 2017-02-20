#include <iostream>
using namespace std;
int main() {
	int possible = 0, n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int k = 1; k <= n/3; k++) {
		if (n % k == 0) {
			// cout << "k= " << k << endl;
			for (int p = 0; p < k; p++) {
				int sum = 0;
				for (int v = p; v < n; v+=k)
					if (a[v] == 1) sum++;
				// cout << "sum= " << sum << ", " << n << "/" << k << "= " << n/k << endl;
				if (sum == n/k) {
					cout << "YES" << endl;
					return 0;
				}
        /**
        The part inside for loop can also be done like so:
        int z = 1;
        for (int v = p; v < n; v+=k)
          z &= a[i];
        if (z) {
          cout << "YES" << endl;
          return 0;
        }
        **/
			}
		}
	}
	cout << "NO" << endl;
}
