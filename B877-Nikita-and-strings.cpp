#include <bits/stdc++.h> 
#define LL long long 
using namespace std;
bool debug = false;
string str;
int maxa[5005], maxT = 0;
int main() {
    // ifstream cin("input.inp");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, str);
    int n = str.size();
    str = ' ' + str; maxa[0] = 0;
    for (int i = 1; i <= n; i++) {
    	maxa[i] = maxa[i-1] + (str[i] == 'a');
    }
    for (int i = 1; i <= n; i++) {
    	for (int j = n; j >= i-1; j--) {
    		maxT = max(maxT, maxa[i-1] + j-i+1-(maxa[j]-maxa[i-1]) + maxa[n]-maxa[j]);
    	}
    }
    cout << maxT << "\n";
	return 0;
}
