#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long sx,sy,dx,dy;
    cin >> sx >> sy >> dx >> dy;
    if(dy < sy) {
        cout << -1 << endl;
        return;
    }
    long long moves = dy - sy;
    sx += moves;
    if(dx > sx) {
        cout << -1 << endl;
        return;
    }
    
    cout << moves + (sx - dx) << endl;
 
 
 
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