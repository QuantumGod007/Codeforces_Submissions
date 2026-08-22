#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    if(a[0]== 1) {
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