#include <iostream>
using namespace std;

int main() {
	int n, t, k;
	cin >> n >> k >> t;
	int m = n * k * t / 100;
	int l = ((int) m) / k;
	int res = (int) (m - l * k);
	// cout << "l= " << l << ", res= " << res << endl;
	for (int i = 0; i < l; i++) cout << k << " ";
	if (l < n) cout << res << " ";
	for (int i = l + 1; i < n; i++) cout << 0 << " ";
	return 0;
}
