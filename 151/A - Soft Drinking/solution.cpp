#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    cout << min({(k*l)/nl,c*d,p/np})/n << '
';
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}