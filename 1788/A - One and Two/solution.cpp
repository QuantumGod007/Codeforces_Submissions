#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long cnt_of_2 = 0;
    vector<long long> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] == 2)
            cnt_of_2++;
    }
    if(cnt_of_2 == 0) {
        cout << 1 << '
';
    }
    else if (cnt_of_2 % 2 == 1) {
        cout << -1 << '
';
    }
    else {
        long long k = cnt_of_2 / 2;
        long long cnt = 0;
        for(int i=0;i<n;i++) {
            if(a[i] == 2) {
                cnt++;
            }
            if(cnt == k) {
                cout << i + 1 << '
';
                break;
            }    
        }
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