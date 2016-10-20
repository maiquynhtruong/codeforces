#include <iostream>
#include <algorithm>
#define maxN 1000000
using namespace std;
vector<int> par;
vector<int> a;
set<int> sets[maxN];
int findRep(int x) {
    if (x == par[x])
        return x;
    par[x] = findRep(par[x]);
    return par[x];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        par[findRep(x)] = findRep(y);
    }
    for (int i = 0; i < n; i++)
        sets[par[a[i]]].insert(a[i]);
    for (int i = 0; i < n; i++)
        cout << *sets.end();
}
