#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    int x,y;
    cin>>x>>y;
    cout << min(x,y) << " " << max(x,y) << '
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