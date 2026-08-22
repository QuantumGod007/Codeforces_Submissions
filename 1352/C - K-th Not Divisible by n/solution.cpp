#include <bits/stdc++.h>
using namespace std;
 
void binarySearch(long long n, long long k) {
    long long low = 1;
    long long high = 2e9;
    long long ans = -1;
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if((mid - (mid/n)) >= k) {
            high = mid - 1;
            ans = mid;
            
        }
        else if((mid - (mid/n)) < k) {
            low = mid + 1;        
        }
    }
    cout << ans << '
';
        
}
 
 
void solve() {
    long long n,k;
    cin >> n >> k;
    binarySearch(n,k);
 
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