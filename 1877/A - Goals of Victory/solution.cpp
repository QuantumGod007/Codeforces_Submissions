#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n-1);
    long long sum = 0;
    for(int i=0;i<n-1;i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum > 0) 
        cout << "-" << sum << '
';
    
    else 
        cout << abs(sum) << '
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