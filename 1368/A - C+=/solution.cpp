#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    int cnt=0;
    while(a<=n&&b<=n) {
        if(a>b) {
            b+=a;
        }
        else {
            a+=b;
        }
        cnt++;
    }
    cout << cnt << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}