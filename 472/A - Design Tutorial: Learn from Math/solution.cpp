#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if(n%2 == 0) {
        cout << 4 << " " << n-4 << '
';
    }
    else {
        cout << 9 << " " << n-9 << '
';
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    
    return 0;
}