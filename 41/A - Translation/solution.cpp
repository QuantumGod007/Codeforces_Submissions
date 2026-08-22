#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int n = s1.length();
    string rev;
   
    for(int i=n-1;i>=0;i--) {
        rev.push_back(s1[i]);      
        
    }
    if(rev == s2) {
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