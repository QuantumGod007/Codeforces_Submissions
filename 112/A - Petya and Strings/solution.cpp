#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string a,b;
    cin >> a >> b;
    int sumA = 0;
    int sumB = 0;
    int n = a.length();
    bool val = true;
    for (int i = 0; i < n; i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i] < b[i]) {
            cout << -1 << '
';
            val = false;
            break;
        }
        else if (a[i] > b[i]) {
            cout << 1 << '
';
            val = false;
            break;
    }
    }
 
    if(val) {
        cout << 0 << '
';
    }
 
 }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}