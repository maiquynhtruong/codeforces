//http://codeforces.com/contest/691/problem/F

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;
int n, m;
int main() {
   cin >> n;
//   ifstream fin;
//   fin.open("input.txt", ios::in);
//   fin >> n;
   int a[n];
   for (int i = 0; i < n; i++) cin >> a[i];
   cin >> m;
   int p[m], ans[m];
   for (int i = 0; i < m; i++) {
       cin >> p[i];
       ans[i] = 0;
   }
   for (int i = 0; i < m; i++) {
//       cout << "p= " << p[i] << endl;
       for (int j = 0; j < n; j++){
           int tmp = 1;
           if (a[j] < p[i]) tmp = ceil((float) p[i] / a[j]);
//           cout << "a= " << a[j] << ", tmp= " << tmp << endl;
           for (int k = 0; k < n; k++) 
               if (k != j && a[k] >= tmp) {
                    ans[i]++;
//                   cout << a[j] << " " << a[k] << endl;
               }
       }
//       cout << "ans= " << ans[i] << endl;
         cout << ans[i] << endl;
   }
}
