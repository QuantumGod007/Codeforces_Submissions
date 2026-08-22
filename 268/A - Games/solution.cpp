#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> h(n),a(n);
    for(int i=0;i<n;i++) {
        cin >> h[i] >> a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(h[i] == a[j]) {
                sum++;
            }
        }
     }
     cout << sum << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}