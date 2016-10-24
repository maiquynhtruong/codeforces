//http://codeforces.com/problemset/problem/725/D
#include <iostream>
#include <queue>
using namespace std;
typedef long long LL;
priority_queue<LL> q1;
priority_queue<pair<LL, LL> > q2;

int main() {
    LL b, w, b1, w1;
    int n, ans;
    cin >> n >> b >> w;
    while (--n) {
        cin >> b1 >> w1;
        if (b1 > b)
            q1.push(b1-w1);
        else 
            q2.push(make_pair(b1, w1));
    } 
    ans = q1.size();
    while (!q1.empty() && b > -q1.top()) {
        b -= -q1.top() + 1;
        q1.pop();
        while (!q2.empty() && q2.top().first > b) {
            q1.push(q2.top().first - q2.top().second);
            q2.pop();
        }
        ans = min(ans, (int) q1.size());
    }
    ans = min(ans, (int) q1.size());
    cout << ans + 1 << endl;
}

