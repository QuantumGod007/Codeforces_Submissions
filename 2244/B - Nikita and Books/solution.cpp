#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long need = 1;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
 
    for(int i=0;i<n-1;i++) {
 
        if(v[i] >= need) {
            v[i+1] += v[i] - need;
        }
        else {
            cout << "NO
";
            return;
        }
 
        need++;
 
    }
    if(v[n-1] < need) {
        cout << "NO
";
        return;
    }
    
 
    cout << "YES
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