#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c || b+c==a || a+c==b) {
        cout << "YES
";
    }
    else {
        cout << "NO
";
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