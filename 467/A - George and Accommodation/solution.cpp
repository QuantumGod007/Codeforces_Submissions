#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int cnt = 0;
    int p,q;
 
    for(int i=0;i<n;i++) {
        cin >> p >> q;
        if(q-p >= 2) {
            cnt++;
        }
    }
    cout << cnt << '
';
 
  
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}