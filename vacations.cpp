//http://codeforces.com/contest/699/problem/C
#include <iostream>
#include <algorithm>
using namespace std;
int n, a[101][2], ans[101];

int cal(int day, int val) {
    int retVal = 0;
    // take today off
    dayOff = 1 + ans[day-1];
    // not take today off
    notDayOff = ans[day-1];
    retVal = min(dayOff, notDayOff);
    return retVal;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        a[i][0] = temp / 2;
        a[i][1] = temp % 2;
    }


}
