#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a != b && b != c && a != c) {
        int mini = INT_MAX;
        mini = min(mini,abs(a-b));
        mini = min(mini,abs(b-c));
        mini = min(mini,abs(a-c));
 
        cout << mini << '
';
 
 
    }
    else {
        cout << 0 << '
';
    }
 
 
    
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