#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s = "Timur";
    int n;
    cin >> n;
    string p;
    cin >> p;
 
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
 
    if(s==p) {
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}