#include <iostream>
#include <fstream>

using namespace std;

int v[60], s[60];
int dp[60][60][60][60];

int match(int i, int j) {
    return (v[i] == v[j] || s[i] == s[j]); 
}
int dfs(int len, int i, int j, int k) {
    if (len == 2){
        if (match(j,k)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    if (len == 3 && match(j, k) && match(i, k)) 
        return 1;
    int &ret = dp[len][i][j][k];
    if (ret) return 0; 
    if (match(j, k))
        if (dfs(len-1, len-3, i, k))
            return 1;
    if (match(len-3, k))
            if (dfs(len-1, k, i, j))
                return 1;
    ret = 1;
    return 0; 

}

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        v[i] = str[0]; s[i] = str[1];
    }
    if (dfs(n, n-2, n-1, n) || n==1)
        cout << "YES\n";
    else 
        cout << "NO\n";
}
