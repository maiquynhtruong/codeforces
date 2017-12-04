//http://codeforces.com/contest/845/problem/G
#include <bits/stdc++.h>
using namespace std;
int N, M;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		int x, y, w;
		cin >> x >> y >> w;
		edges[x].push_back(mp(y, w));

	}
	priority_queue<pii> pq;
	pq.push(mp(0, 1));
	while(!pq.empty()) {
		int curW = pq.top().first, cur = pq.top().second;
		if (curW > dist[cur]) continue;
		for (int i = 0; i < edges[cur].size(); i++) {
			int nxt = edges[cur][i].first, nxtW = edges[cur][i].second;
			if (dist[nxt] > dist[cur] | nxtW) {
				dist[nxt] = dist[cur] | nxtW;
				pq.push(mp(dist[nxt], nxt));
			}
		}	
	}
}
