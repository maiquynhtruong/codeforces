//http://codeforces.com/problemset/problem/337/A
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ifstream fin;
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) cin >> arr[i];
    vector<int> puzzles(arr, arr + sizeof arr / sizeof arr[0]);
    sort (puzzles.begin(), puzzles.end());
    int min = 10000; 
    for (int i = 0; i < m - n + 1; i++) {
        if (puzzles[i + n - 1] - puzzles[i] < min)
            min = puzzles[i+n-1] - puzzles[i];
    }
    cout << min; 
}
