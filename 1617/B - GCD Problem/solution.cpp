#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
int a, b, c;
 
    if(n % 2 == 0) {
        a = (n - 1) / 2;
        b = a + 1;
        c = 1;
    }
    else {
        int cur = (n - 1) / 2;
        if(cur % 2 == 0) {
            a = cur - 1;
            b = cur + 1;
            c = 1;
        }
        else {
            a = cur - 2;
            b = cur + 2;
            c = 1;
        }
    }
    cout << a << " " << b << " " << c << '
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