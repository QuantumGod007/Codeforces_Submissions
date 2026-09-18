#include <iostream>
using namespace std;
 
void solve() {
    int n,x;
    cin>>n>>x;
    if(n<3) {
        cout << 1 << '
';
        return;
    }
    else {
        cout << ((n - 3)/x) + 2 << '
';
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