#include <bits/stdc++.h>
using namespace std;
string t, p;
int a[200005], le[200005], tLen, pLen;
bool checkSubsequence(int tInd) {
	string temp;
	memset(le, 0, sizeof(le));
	for (int i = tInd; i < tLen; i++) le[a[i]-1] = 1;
	for (int i = 0; i < tLen; i++) if (le[i]) temp += t[i];
	// cout << temp << "\n";
	int ind = 0;
	for (int i = 0; i < temp.size(); i++) {
		if (p[ind] == temp[i]) {
			ind++;
		}
		if (ind == pLen) {
			// cout << "true\n";
			return true;
		}
	}
	// cout << "false\n";
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cin.ignore();
	getline(cin, t); getline(cin, p);
	tLen = t.length(); pLen = p.length();
	for (int i = 0; i < tLen; i++) cin >> a[i];
	int l = 0, r = tLen-1;
	while (l < r) {
		int mid = l + (r-l+1)/2;
		// cout << "l= " << l << ", r= " << r << ", mid= " << mid << "\n";
		if (checkSubsequence(mid)) l = mid;
		else r = mid-1;
	}
	// cout << l << " " << r << "\n";
	cout << l << "\n";
}
