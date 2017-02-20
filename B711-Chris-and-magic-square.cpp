// Quite a meaty one for a B level problem
#include <iostream>
using namespace std;
typedef long long ll;
ll p, s, x, y;
void sayNo(int location) {
	// cout << location << endl;
	cout << -1 << endl;
}
int main() {
	int n; cin >> n;
	if (n <= 1) {cout << 1 << endl; return 0;}
	ll h[n], v[n];
	for (int i = 0; i < n; i++) {h[i] = 0; v[i] = 0;}
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) {
			int temp; cin >> temp;
			// cout << temp << "  ";
			if (temp > 0) {
				h[i] += temp;
				v[j] += temp;
				if (i == j) p += temp;
				if (i == n - j - 1) s += temp;
			} else {
				x = i; y = j;
			}
		}
	// for (int i = 0; i < n; i++) cout << h[i] << ", ";
	// cout << endl;
	// for (int i = 0; i < n; i++) cout << v[i] << ", ";
	// cout << endl;
	int ind = 0; ll common = h[ind];
	while (ind == x) common = h[++ind]; 
	// cout << common << endl;
	ll rowsum = -1, colsum = -1;
	for (int i = 0; i < n; i++) 
		if (i != x)	{
			if (common != h[i]) {sayNo(1); return 0;}
		} else {
			rowsum = h[i];
		}
	for (int i = 0; i < n; i++) 
		if (i != y)	{
			if (common != v[i]) {sayNo(2); return 0;}
		} else {
			colsum = v[i];
		}
	// cout << rowsum << ", " << colsum << endl;
	if (x != y) if (p != common) { sayNo(3); return 0;}
	if (x != n - y - 1) if (s != common) { sayNo(4); return 0;}
	if (rowsum == colsum) {
		if (x == y && p != rowsum) {sayNo(5); return 0;}
		if (x == n - y - 1 && s != colsum) {sayNo(6); return 0;}
		ll res = common - rowsum;
		if (res > 0) {cout << res << endl; return 0;}
		else {sayNo(7); return 0;}
	} else {
		sayNo(8); return 0;
	}
	return 0;
}
