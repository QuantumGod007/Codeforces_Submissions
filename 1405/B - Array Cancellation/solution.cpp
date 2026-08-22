#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long rem_neg = 0;
    long long pos = 0;
    for(int i=0;i<n;i++) { 
        if(a[i] >= 0) {
            pos += a[i];
        }
        else {
            if(pos >= abs(a[i])) {
                pos -= abs(a[i]);
            }
            else {
                rem_neg += (abs(a[i]) - pos);
                pos = 0;
 
            }
        }
    }
 
    cout << rem_neg << '
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