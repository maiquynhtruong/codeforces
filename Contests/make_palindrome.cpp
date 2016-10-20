//http://codeforces.com/contest/600/problem/C
//http://codeforces.com/contest/600/submission/14769002
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){

    ifstream fin;
    fin.open("input.txt", ios::in);
    string str;
    getline(fin, str);
    int len = str.length();
    int cnt[27] = {0};
    //    fill(a, a+len, 0);
    for (int i = 0; i < len; i++) 
        cnt[str[i]-'a']++;
    int index = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1){ 
            for (int j = 25; j >= i; j--){
                if (cnt[j] % 2 == 1){
                    if (i != j){ 
                        cnt[i]++;
                        cnt[j]--;
                        break;
                    } else {
                        cnt[i]--;
                        str[len/2] = i + 'a';
                    }
                }
            }
        }

        for (int j = 0; j < cnt[i]/2; j++) {
            str[index] = i + 'a';
            str[len-1-index] = i + 'a';
            index++;
        }
    }

    cout << str << endl;
}
