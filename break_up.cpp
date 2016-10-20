#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct Edge {
    int id, u, v;
    ll w;
    Edge(int i, int x, int y, ll z): id(i), u(x), v(y), w(z) {}
};

int n, m, s, t 

int main() {
    cin >> n >> m >> s >> t;
    for (i = 1; i <= m; i++){
        cin >> u >> v >> weight;
        g[u].push_back({v, i});
        g[v].push_back({u, i});
        w[i] = weight;
    } 
    if (!dfs(s, t)) {
        cout << "0" << endl;
        return 0;
    }
}
