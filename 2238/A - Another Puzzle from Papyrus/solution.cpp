#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }
    bool ans = true;
    for(int i=0;i<n;i++) {
        if(a[i] < b[i]) {
            ans = false;
            break;
        }
    }
    if(!ans) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++) {
            if(a[i] < b[i]) {
                cout << -1 << endl;
                return;
            }
        }
 
        int cnt = c;
        for(int i=0;i<n;i++) {
            cnt += abs(a[i]-b[i]);
        }
 
        cout << cnt << endl;
 
 
 
    }
    else {
        int cnt = 0;
        for(int i=0;i<n;i++) {
            cnt += abs(a[i]-b[i]);
        }
        cout << cnt << endl;
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