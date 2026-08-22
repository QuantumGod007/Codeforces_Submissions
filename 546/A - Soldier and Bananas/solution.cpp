#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int k,w,n;
    cin >> k >> n >> w;
    int sum = 0;
    for(int i=1; i <= w;i++) {
        sum += i*k;
    }
    if(sum > n) {
        cout << sum - n << '
';
    }
    else {
        cout << 0 << '
';
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}