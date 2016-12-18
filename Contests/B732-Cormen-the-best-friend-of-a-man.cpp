// CF 732B
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int total = 0;
    int a[n+2], b[n+2];
    b[0] = k; b[n+1] = k; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 1; i <= n; i++) 
        if (a[i] + b[i-1] < k) {
            b[i] += k - (a[i] + b[i-1]);
            total += k - (a[i] + b[i-1]);
        }
    cout << total << endl;
    for (int i = 1; i < n; i++) 
        cout << b[i] << ' ';
    cout << b[n] << endl;
}
