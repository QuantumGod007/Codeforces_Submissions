#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
 
    int sum = (a+b+c) - min({a,b,c});
 
 
    if(sum >= 10) {
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