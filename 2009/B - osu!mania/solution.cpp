#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=0;j<4;j++) {
            if(a[i][j] == '#') {
                cout << j+1 << " ";
            }
 
        }
    }
    cout << '
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