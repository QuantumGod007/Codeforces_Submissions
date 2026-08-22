#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    bool isCap = true;
    for(int i=1;i<n;i++) {
        if(islower(s[i])) {
            isCap = false;
            break;
        }
    }
    if(isCap) {
         for(int i=0;i<n;i++)  {
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
         }
    }
    cout << s << '
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}