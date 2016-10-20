nclude <iostream>                                                                               
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
vector<int> c[100000], fl;
int w[100000];
int main() {
        int n, m, k, u, v, l, cost = 1000000005;
            cin >> n >> m >> k;
                if (k == 0) { cout << "-1" << endl; return 0;}
                    memset(w, 1000000005, sizeof(w));
                        for (int i = 0; i < m; i++) {
                                    cin >> u >> v >> l;
                                            if (find(c[u].begin(), c[u].end(), v) != c[u].end()) {
                                                            c[u].push_back(v);
                                                                        c[v].push_back(u);
                                                                                } else {
                                                                                                if (w[u] > l) w[u] = l;
                                                                                                            if (w[v] > l) w[v] = l;
                                                                                                                    }
                                                }
                            int tmp;
                                for (int i = 0; i < k; i++) { cin >> tmp; fl.push_back(tmp);} 
                                    for (int i = 0; i < k; i++) if (w[fl[i]] < cost) cost = w[fl[i]];
                                        if (cost == 1000000005) cout << "-1";
                                            else cout << cost;
                                                return 0;
}

