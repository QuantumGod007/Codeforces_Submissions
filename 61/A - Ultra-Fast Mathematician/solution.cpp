#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s1,s2,s3;
    cin >> s1 >> s2;
    
 
    int n = s1.length();
    for(int i=0;i<n;i++) {
        if(s1[i] != s2[i]) {
            s3.push_back('1');
        }
        else {
            s3.push_back('0');
        }
    }
    cout << s3 << '
';
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}