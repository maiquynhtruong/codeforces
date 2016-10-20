#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int n, m;
int N = 300005; //should be 3000005 but not enough space
int main() {
    //cin >> n; 
    ifstream fin;
    fin.open("input.txt", ios::in);
    fin >> n;
    long a[n], cnt[N], z[N];
    fill(cnt, cnt+N, 0);
    fill(z, z+N, 0);
    for (int i = 0; i < n; i++) {
        fin >> a[i];
        cnt[a[i]]++;
    }
    fin >> m;
    int p[m];
    for (int i = 0; i < m; i++) fin >> p[i];
    
    for (int j = 0; j < N; j++) {
        if (!cnt[j]) continue;
        for (int b = j; b < N; b+=j)
            if (b/j == j) z[b] += (cnt[j] * (cnt[j] - 1LL));
            else z[b] += 1LL * cnt[j] * cnt[b/j];
    }
    for (int i = 1; i <= N; i++) z[i] += z[i-1];
    for (int i = 0; i < m; i++) cout << n*(n-1LL) - z[p[i] - 1] << " ";
}
