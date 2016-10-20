// 3/25/2016
// http://mayokoex.hatenablog.com/entry/2016/02/09/231102
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int dp[50][50][50];

int dfs(int n, int m, int k) {
	// corner cases
	int& ret = dp[n][m][k];
	if (k == 0 || k == n*m) return ret = 0;
	if (ret != -1) return ret;
	if (n*m < k) return ret = 100000000;
	if (n == 1 || m == 1) return ret = 1; 

	// if not one of the corner cases, compute dp[m][n][k]
	ret = 100000000;

	for (int i = 1; i < n; i++) { 
		for (int kk = 0; kk <= k; kk++) {
			ret = min(ret, m*m + dfs(i, m, kk) + dfs(n - i, m, k - kk));
		}
	}

	for (int j = 1; j < m; j++) {
		for (int kk = 0; kk <= k; kk++){
			ret = min(ret, n*n + dfs(n, j, kk) + dfs(n, m - j, k - kk)); 
		}
	}
	
	return ret;
}

int main(){
//	ifstream fin;
//	fin.open("input.txt", ios::in);
	ios :: sync_with_stdio(false);
	int test, n, m, k;
	cin >> test;
	memset(dp, -1, sizeof(dp));
	while(test--) {
		cin >> n >> m >> k;
		cout << dfs(n, m, k) << endl;	
	}
	return 0;

}
