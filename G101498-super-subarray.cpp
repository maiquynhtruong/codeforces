//http://codeforces.com/gym/101498/problem/D
#include <bits/stdc++.h> 
#define LL long long
using namespace std;
bool debug = false;
int test, n;
LL a[2005], sum[2005], maxV = 2000*1e9;
LL gcd(LL a, LL b) {
	// cout << "gcd " << a << " " << b << "\n";
	if (b == 0) return a;
	else return gcd(b, a % b);
}

LL lcm(LL a, LL b) {
	return a/gcd(a, b)*b;
}
int main() {
// 	ifstream cin("super-subarray.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test; 
    while (test--) {
    	cin >> n;
    	sum[0] = 0;
    	for (int i = 1; i <= n; i++) {
    		cin >> a[i];
    		sum[i] = a[i] + sum[i-1];

    	}
    	int cnt = 0;
    	for (int i = 1; i <= n; i++) {
    		LL temp = a[i];
    		for (int j = i; j <= n; j++) {
    			temp = lcm(temp, a[j]);
    			if (temp > maxV) break;
    			if ((sum[j] - sum[i-1]) % temp == 0) cnt++;
    		}
    	}
    	cout << cnt << "\n";
    }
    return 0;
}
