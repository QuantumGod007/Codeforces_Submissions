#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<string> s(8);
    string final = "";
 
    for(int i=0;i<8;i++) {
        cin >> s[i];
    }
 
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(s[i][j] >= 'a' && s[i][j] <= 'z') 
            final.push_back(s[i][j]);    
 
        }
    }
        
    
 
    cout << final << '
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}