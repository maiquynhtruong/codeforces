#include <bits/stdc++.h> 
# define LL long long 
using namespace std;
bool debug = false;
set<LL> s;
map<int, LL> nextMap;
int test, n, k, nxt[100005];
LL a[100005];
struct PairComparator {
	bool operator() (const pair<int, int> &a,  const pair<int, int> &b) {
		return a.second < b.second;
	}
};
priority_queue<pair<int, int> > pq;
int main() {
	// ifstream cin("cooking-time.inp");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    while (test--) {
    	cin >> n >> k;
    	s.clear();
    	for (int i = 1; i <= n; i++) {
    		cin >> a[i];
    	}
    	for (int i = n; i >= 1; i--) {
    		if (nextMap.find(a[i]) == nextMap.end()) {
    			nxt[i] = i;
    		} else {
    			nxt[i] = nextMap[a[i]];
    		}
    		nextMap[a[i]] = i;
    	}
    	int open = 0;
    	for (int i = 1; i <= n; i++) {
    		if (s.find(a[i]) == s.end()) {
    			if (s.size() == k) {
    				pair<int, int> p = pq.top(); pq.pop();
    				s.erase(p.first);	
    			}
    			s.insert(a[i]);
    			open++;
    		}
    		pq.push(make_pair(a[i], nxt[i]));
    	}
    	cout << open << "\n";
    }
}
