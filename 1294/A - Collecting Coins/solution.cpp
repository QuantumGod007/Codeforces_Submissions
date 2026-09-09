#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll a,b,c,n;
    cin>>a>>b>>c>>n;
 
    ll maxi = max({a,b,c});
    ll need = maxi - a + maxi - b + maxi - c;
    if(n >= need && (n-need)%3==0)
        cout << "YES
";
    else
        cout << "NO
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