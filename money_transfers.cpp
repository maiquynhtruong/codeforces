#include <iostream>

using namespace std;

int min(int a, int b) {
    if (a < b)
        return a;
    else 
        return b;
}
int main() {
    int n; cin >> n;
    int a[100000], d[1000000];
    int sum = 0;
    int ans = n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        d[sum]++;
        cout << "sum= " << sum << ", d[" << sum << "]= " << d[sum] << endl;
        ans = min(ans, n - d[sum]);
    }
    cout << ans << endl;

}
