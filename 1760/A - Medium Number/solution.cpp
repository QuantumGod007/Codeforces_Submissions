#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    // int a,b,c;
    // cin >> a >> b >> c;
    // int mini = min({a,b,c});
    // int maxi = max({a,b,c});
    // int sum = a+b+c;
    // int medium = sum-mini-maxi;
    // cout << medium << '
';
    int a[3] = {0};
    for(int i=0;i<3;i++) {
        cin >> a[i];
    }
    sort(a,a+3);
    cout << a[1] << '
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while(T--) {
    solve();
    }
 
    return 0;
}