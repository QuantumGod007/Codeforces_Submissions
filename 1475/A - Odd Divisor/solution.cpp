#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    while(n%2==0) {
        n/=2;
    }
    if(n != 1) 
        cout << "YES
";
    else 
        cout << "NO
";
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