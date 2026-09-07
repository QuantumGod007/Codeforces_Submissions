#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> a(n);
    vector<long long> freq(n+1);
 
    for(int i=0;i<n;i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
 
    for(int i=0;i<n;i++) {
        if(freq[a[i]] >= 3) {
            cout << a[i] << '
';
            return;
        }
    }
 
    cout << -1 << '
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