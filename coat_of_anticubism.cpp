#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin;
    //fin.open("input.txt", ios::in);
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    sort(l, l+n);
    int sum = 0;
    for (int i = 0; i < n-1; i++) sum += l[i];
    cout << l[n-1] - sum + 1 << endl;
}
