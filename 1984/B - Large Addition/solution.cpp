#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long cnt = 0;
    while(n > 9) {
        long long digit = n % 10;
        if(cnt == 0) {
            cnt = 1;
            if(digit == 9) {
                cout << "NO
";
                return;
            }
        }
        else if(digit == 0) {
            cout << "NO
";
            return;
        }
        n /= 10;
    }
    if(n == 1) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
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