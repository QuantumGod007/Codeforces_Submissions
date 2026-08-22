#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long sum = 0;
    vector<long long> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        sum += v[i];
    }
    vector<long long> freq(1001);
    for(int i=0;i<n;i++) {
        freq[v[i]]++;
    }
    long long mx = 0;
    long long val = 0;
    for(int i=1;i<=1000;i++) {
        if(freq[i] > mx) {
            mx = freq[i];
            val = i;
        }
    }
    int others = n - mx;
    long long wasted = max(0LL,mx-others-2);
    sum -= wasted * val;
    cout << sum << '
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