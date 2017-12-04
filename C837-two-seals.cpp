#include <bits/stdc++.h> 
using namespace std;
int n, a[200005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
    	cin >> x[i] >> y[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		int area = x[i]*y[i] + x[j]*y[j];
    		if (x[i] + x[j] <= a && max(y[i], y[j]) <= b) ans = max(ans, area);
    		if (x[i] + y[j] <= a && max(y[i], x[j]) <= b) ans = max(ans, area);
    		if (y[i] + x[j] <= a && max(x[i], y[j]) <= b) ans = max(ans, area);
    		if (y[i] + y[j] <= a && max(x[i], x[j]) <= b) ans = max(ans, area);
    		if (x[i] + x[j] <= b && max(y[i], y[j]) <= a) ans = max(ans, area);
    		if (x[i] + y[j] <= b && max(y[i], x[j]) <= a) ans = max(ans, area);
    		if (y[i] + x[j] <= b && max(x[i], y[j]) <= a) ans = max(ans, area);
    		if (y[i] + y[j] <= b && max(x[i], x[j]) <= a) ans = max(ans, area);
    	}
    }
    cout << ans << "\n";
}
