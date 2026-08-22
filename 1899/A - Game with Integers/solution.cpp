#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int prev = --n;
    int next = n + 2;
    if(prev % 3 == 0 || next % 3 == 0) {
        cout << "First
";
    }
    else {
        cout << "Second
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