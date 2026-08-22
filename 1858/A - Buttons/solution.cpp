#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a > b) {
        cout << "First
";
    }
    else if (a < b) {
        cout << "Second
";
    }
    else {
        if(c%2 != 0) {
            cout << "First
";
        }
        else {
            cout << "Second
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}