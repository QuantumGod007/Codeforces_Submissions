#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }
    for(int i=0;i<n;i++) {
        if(a[i] > b[i]) {
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
    long long sum = 0;
    for(int i=0;i<n-1;i++) {
        sum += abs(a[i] - a[i+1]);
    }
    for(int i=0;i<n-1;i++) {
        sum += abs(b[i] - b[i+1]);
    }
    cout << sum << '
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