#include <iostream> 
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;
int main() {
    int d, h, v, e;
    cin >> d >> h >> v >> e;
    double d_rate = (4 * v) / (M_PI * d * d);
    double diff_rate = d_rate - e;
    double time_drain;
    if (diff_rate <= 0)
        cout << "NO" << endl;
    else { 
        time_drain = h / diff_rate;
        if (time_drain > pow(10.0, 4.0)) 
            cout << "NO" << endl;
        else 
            cout << "YES" << '\n' << time_drain << endl;
    }
}
