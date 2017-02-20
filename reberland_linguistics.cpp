#include <bits/stdc++.h>
#include <fstream>
using namespace std;


string str; 
set<string> s;
bool vis[10100][5] = {0};
void dfs(int pos, int len) {
    if (pos < 0 ||vis[pos][len])
        return;
    vis[pos][len] = 1;
    s.insert(str.substr(pos, len));
    if (pos - len >= 0 && str.substr(pos, len) != str.substr(pos - len, len)) 
        dfs (pos - len, len);
    dfs(pos - (5 - len), 5 - len);
}

int main() {
    ifstream fin; fin.open("input.txt", ios::in);
    fin >> str;
    str = str.substr(5);
    int strlen = str.size();
    dfs(strlen - 3, 3);
    dfs(strlen - 2, 2);
    cout << s.size() << endl;
    for (set<string>::iterator i = s.begin(); i != s.end(); i++)
        cout << *i << endl;
    return 0;
}
