#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26);
    
    if(n < 26) {
        cout << "NO
";
        return;
    }
        for(int i = 0; i < n ;i++) {
            s[i] = toupper(s[i]);
            a[s[i] - 'A']++;
        }
    
    for(int i=0;i<26;i++) {
        if(a[i] == 0) {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}