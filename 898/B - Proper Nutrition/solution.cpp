#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,a,b;
    cin >> n >> a >> b;
 
    for(int x=0; x <= n/a; x++) {
        if((n-a*x) % b == 0) {
            cout << "YES
" << x << " " << (n-a*x)/b << "
";
            return;
        }
    }
    cout << "NO
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}