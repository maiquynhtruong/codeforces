#include <bits/stdc++.h> 
#define LL long long 
using namespace std;
bool debug = false;
int ancestor[200005], st[200005];
int lit[200005], temp, num, time;
string cmd;
void dfs(int u) {
	int[u] = ++time;
	for (int v : ancestor[u]) dfs(v);
	out[u] = time;
}

int queryLitRooms(int qs, int qe, int ind) {
	if (lazy[ind]) {
		tree[ind] = te - ts + 1 - tree[ind];
		if (s != e) {
			lazy[ind*2] ^= 1;
			lazy[ind*2+1] ^= 1;
		}
		lazy[ind] = 0;
	}
	if (te < ts || qe < ts || qs > qe) return 0;
	if (qs <= ts && te <= qe) {
		return tree[ind];
	}
	if (qs <= ts && te <= qe) return tree[ind]; // segment of node is part of given range
	if (te < qs || qe < ts) return 0; // segment of node is outside given range
	int mid = ts + (te-ts)/2;
	return queryLitRooms(ts, mid, qs, qe, 2*ind) + queryLitRooms(mid+1, te, qs, qe, 2*ind+1);
}
void switchLights(int ind, int ts, int te, int qs, int qe) {
	if (lazy[ind]) {
		tree[ind] = te - ts + 1 - tree[ind];
		if (s != e) {
			lazy[ind*2] ^= 1;
			lazy[ind*2+1] ^= 1;
		}
		lazy[ind] = 0;
	}
	if (te < ts || qe < ts || qs > qe) return;
	if (qs <= ts && te <= qe) {
		tree[ind] = te - ts + 1 - tree[ind];
		if (ts != te) {
			lazy[ind*2] ^= 1;
			lazy[ind*2+1] ^= 1;	
		}
		return;
	}
	int mid = (ts + te) / 2;
	switchLights(ind*2, ts, mid, qs, qe);
	switchLights(ind*2+1, mid+1, te, qs, qe);
	tree[ind] = tree[ind*2+1] + tree[ind*2];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n; 
    for (int i = 1; i <= n-1; i++) {
    	cin >> temp;
    	ancestor[temp].push_back(i);
    }
    for (int i = 1; i <= n; i++) { 
    	cin >> lit[i];
    	if (lit[i]) switchLights(i, 1, n, in[i], in[i]);s
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
    	cin >> cmd >> num;
    	if (cmd == "get") {
    		countLitRooms(num);
    	} else if (cmd == "pow") {
    		switchLights(num);
    	}
    }
}
