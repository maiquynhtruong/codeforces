#include <iostream>

using namespace std;

int checkSorted(int *a, int n) {
    for (int i = 0; i < n-1; i++)
        if (a[i] > a[i+1])
            return 0;
//    cout << "Print array: ";
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
    return 1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int left = 0, right = 0, count = 0;
    
    while (true) {
        for (int i = 0; i < n-1; i++){
            if (a[i] > a[i+1]){
                cout << i+1 << " ";
                //sort from i
                int j;
                for (j = i; j < n - 1 && a[j] > a[j+1]; j+=2) {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                }
                cout << j << endl;
                i = j;
            }
        }
        if (checkSorted(a, n))
            break;
    }
}
