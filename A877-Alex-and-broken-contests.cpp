#include <bits/stdc++.h> 
#define LL long long 
using namespace std;
bool debug = false;
set<string> s;
string name;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    s.insert("Danil"); s.insert("Olya"); s.insert("Slava"); s.insert("Ann"); s.insert("Nikita");
    getline(cin, name);
    int cnt = 0;
    for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
    	string n = *it;
        size_t pos = name.find(n, 0);
    	while ( pos != string::npos) {
            cnt++;
            pos = name.find(n, pos+1);
        }
    }
    if (cnt == 1) cout << "YES\n";
    else cout << "NO\n";
	return 0;
}
