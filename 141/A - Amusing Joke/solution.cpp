#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s1;
    cin >> s1;
 
    string s2;
    cin >> s2;
 
    string s3 = s1+s2;
 
    string s;
    cin >> s;
 
    sort(s3.begin(), s3.end());
    sort(s.begin(), s.end());
 
    if(s3 == s) {
        cout << "YES
";
    }
 
    else {
        cout << "NO
";
    }
 
 
 
 
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}