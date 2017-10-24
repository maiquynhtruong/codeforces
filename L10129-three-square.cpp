#include <bits/stdc++.h> 
using namespace std;
bool debug = true;
int l[4], h[4];
int main() {
// 	ifstream cin("three-square.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> l[1] >> h[1] >> l[2] >> h[2] >> l[3] >> h[3];
    // cout << l[1] << h[1] << l[2] << h[2] << l[3] << h[3] << "\n";
    int s2 = l[1]*h[1] + l[2]*h[2] + l[3]*h[3];
    int side = (int) sqrt(s2);
    int res = 0, left = 0;
    if (side*side == s2) {
    	for (int i = 1; i <= 3; i++)
    	if (side == l[i] || side == h[i]) {
    		swap(l[1], l[i]); swap(h[1], h[i]);
    	}
		left = side*2 - l[1] - h[1];
		// if (left > 0) {
			if (((side == l[2] || side == h[2]) && (side == l[3] || side == h[3])) ||
				(l[2] == left || h[2] == left) && (l[3] == left || h[3] == left)) 
				res = 1;
		// }
		
    }
    if (res > 0) cout << "YES";
    else cout << "NO";
}
