//http://codeforces.com/contest/884/problem/C
#include <bits/stdc++.h> 
using namespace std;
#define pii pair<int, int>
#define LL long long
bool debug = false;
int n, p[100005];
bool visited[100005];
vector<int> cycleLens;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> p[i]
    }
    int num = 1;
    for (int i = 0; i < n; i++) {
    	if (visited[i]) continue;
    	int cycleLen = 0, des = i;
    	while (!visited[des]) {
    		visited[des] = true; des = p[des]; cycleLen++;
    	}
    	cycleLens.push_back(cycleLen);
    }
    LL ans = 0LL;
    if (cycleLens.size() < 2) {
    	ans = cycleLens[0]*cycleLens[0];
    } else {
    	int sz = cycleLens.size();
    	sort(cycleLens.begin(), cycleLens.end(), greater<int>);
    	ans = (cycleLens[0] + cycleLens[1])*(cycleLens[0] + cycleLens[1]);
    	for (int i = 2; i < sz; i++) {
    		ans += cycleLens[i]*cycleLens[i];
    	}
    }
    cout << ans << "\n";
}
