#include <bits/stdc++.h> 
#define LL long long 
using namespace std;
bool debug = false;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout << (n*3)/2 << "\n";
    for (int i = 2; i <= n; i+=2) cout << i << " ";
    for (int i = 1; i <= n; i+=2) cout << i << " ";
    for (int i = 2; i <= n; i+=2) cout << i << " ";
}
