#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0, avg = v[0];
    for(int i=1;i<n;i++) {
        ans += (v[i] - avg);
    }
    cout << ans << "
";
 
 
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