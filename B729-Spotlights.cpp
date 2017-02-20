// A peek at implementation of bk2dcradle
#include <iostream>
using namespace std;
const int MAXN = 1e3 + 3;
int a[MAXN][MAXN];
int col[MAXN][MAXN], row[MAXN][MAXN];
int main() {
	ios_base::sync_with_stdio(false); // This line is the difference between Accepted and Time limit exceeded!
	int n, m;
	cin >> n >> m;
	// cout << "n= " << n << ", m= " << m << endl;
	// int count = 0;
	// int col[n+1][m+1], row[n+1][m+1], a[n+1][m+1];
	// row[1][0] = 0; col[0][1] = 0;
	// for (int i = 0; i <= n; i++) row[i][0] = 0;
	// for (int j = 0; j <= m; j++) col[0][j] = 0;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++) {
			// col[i][j] = 0; row[i][j] = 0;
			cin >> a[i][j];
			// cout << "a. " << i << ", " << j << ": " << row[i][j-1] << ", " << col[i-1][j] << endl;
			col[i][j] = a[i][j] + col[i-1][j];
			row[i][j] = a[i][j] + row[i][j-1];
			// cout << "b. " << i << ", " << j << ": " << row[i][j] << ", " << col[i][j] << endl;
		}
    int count = 0;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++) 
			if (a[i][j] == 0) {
				// cout << "b. " << i << ", " << j << ": " << row[i][j] << ", " << col[i][j] << endl;
				if (col[i][j]) count++; // top  - col[0][j]
				if (col[n][j] - col[i][j]) count++; // bottom
				if (row[i][j]) count++; // left  - row[i][0]
				if (row[i][m] - row[i][j]) count++; // right
			}
	cout << count << endl;
}
