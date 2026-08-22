#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ops = 0;
    int i = 0;
    while(i+1 < n) {
        if(a[i] % 2 == a[i+1] % 2) {
            ops++;
            i++;
        }
        else {
            i++;
        }
 
    }
    cout << ops << '
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