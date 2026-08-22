#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    bool spacePrint = true;
    for(int i=0;i<n;) {
        if(i+2 < n && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
 
            i += 3;
            if(!spacePrint)  {
                cout << " ";
                spacePrint = true;
            }
 
 
        }
        else {
            cout << s[i];
            spacePrint = false;
            i++;
        }
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}