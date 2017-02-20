// http://codeforces.com/contest/689/problem/B
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int n, a[105], g[101];
queue<int> q;
void move(int k, int val) {
    if (g[k]) return;
    g[k] = val;
    q.push(k);    
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
   move(1, 1);
   while(!q.empty()) {
        int i = q.front();
        cout << i << " ";
        q.pop();
        move(a[i], g[i] + 1);
        if (i > 1) move(i-1, g[i]+1);
        if (i < n) move(i+1, g[i]+1);
   }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << g[i] - 1 << " ";
    }
}
