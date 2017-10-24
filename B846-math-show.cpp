#include <bits/stdc++.h> 
	using namespace std;
	int n, k, M, t[50], maxS, total, totalScore;
	int main() {
// 		ifstream cin("math-show.in");
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    cin >> n >> k >> M;
	    for (int i = 1; i <= k; i++) {
	    	cin >> t[i];
	    	maxS += t[i];
	    }
	    sort(t+1, t+k+1);
	    for (int i = 0; i <= n; i++) {
	    	int val = i*(k+1);
	    	int m = M - i*maxS;
	    	if (m < 0) break;
	    	for (int j = 1; j <= k; j++) {
	    		int num = min(m/t[j], n-i);
	    		val += num;
	    		m -= num*t[j];
	    	}
	    	totalScore = max(totalScore, val);
	    }
	    cout << totalScore << "\n";
	}
