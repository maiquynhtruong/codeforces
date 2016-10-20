#include <iostream>
#include <map>
using namespace std;
map<long, long> mp;
long long go(long long u, long long v, long long w) {
    long long ans = 0;
    while (u != v) {
        if (u < v) {
            ans += mp[v];
            mp[v] += w;
            v /= 2;
        } else {
            ans += mp[u];
            mp[u] += w;
            u /= 2;
        }
    }
    return ans;
}

int main() {
    int q, type; 
    long long u, v, w;
    cin >> q;
    while (q--) {
        cin >> type >> u >> v;
        if (type == 1) {
            cin >> w;
            go(u, v, w);
        } else {
            cout << go (u, v, 0) << endl;
        }
    }
}

