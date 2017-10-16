// http://codeforces.com/contest/846/problem/D
#include <bits/stdc++.h> 
using namespace std;
bool debug = false;
int m, n, k, q, x, y, t, maxT;
vector<pair<int, pair<int, int>>> pixels;
vector<vector<int>> screen;
bool checkBroken(vector<pair<int, pair<int, int>>> &pixels, int time) {
	for (int i = 1; i <= screen.size(); i++)
		for (int j = 1; j <= screen.size(); j++) {
			if ((screen[i][j] - screen[i][j-k] - screen[i-k][j] + screen[i-k][j-k]) == k*k) return true; 
		}
	return false;
}

int searchFirstTime(vector<pair<int, pair<int, int>>> &pixels, int lt, int rt) {
	int mt;
	while (lt < rt) {
		mt = lt + (rt - lt)/2;
		if (checkBroken(pixels, pixels[mt].first)) rt = mt;
		else lt = mt+1;
	}
	return rt;
}
void initScreen(vector<vector<int>> &screen, vector<pair<int, pair<int, int>>> &pixels) {
	for (int i = 1; i <= pixels.size(); i++) {
		screen[pixels[i].second.first][pixels[i].second.second] = 1;
	}	
	for (int i = 1; i <= screen.size(); i++)
		for (int j = 1; j <= screen.size(); j++) {
			screen[i][j] += screen[i][j-1] + screen[i-1][j] - screen[i-1][j-1];
		}
}
int main() {
	ifstream cin("input.inp");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k >> q;
    for (int i = 1; i <= q; i++) {
    	cin >> x >> y >> t;
    	pixels.push_back(make_pair(t, make_pair(x, y)));
    }
    sort(pixels.begin(), pixels.end());
    initScreen(screen, pixels);
    searchFirstTime(pixels, 0, pixels.size());
}
