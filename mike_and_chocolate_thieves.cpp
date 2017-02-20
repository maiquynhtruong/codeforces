#include <iostream>

using namespace std;
long long m, l = 0, r = 1e16;
long long check(long long mid) {
    long long ans = 0;
    for (long long k = 2; k*k*k <= mid; k++)
        ans += mid/(1LL * k * k *k);
    return ans;
}

int main() {
    cin >> m;
    while (l < r) {
        long long mid = l + (r - l)/2;
        if (check(mid) >= m) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    if (check(l) == m)
        cout << l;
    else cout << -1;
    cout << endl;

}
