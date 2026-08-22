#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    vector<long long> a(m);
 
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
 
    long long cur =1;
    long long ans =0;
 
    for(int i = 0; i < m; i++) {
 
        if(a[i] >= cur) {
            ans += a[i] - cur;
        }
        else {
 
 
            ans +=(n - cur) + a[i];
        }
 
        cur = a[i];
    }
 
    cout << ans << '
';
}