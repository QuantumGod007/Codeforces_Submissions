#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int minCnt = 0;
    int grt = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    
    for(int i=0;i<n;i++) {
        sum -= a[i];
        grt += a[i];
        minCnt++;
        if(grt > sum) {
            break;
        }
    }
    cout << minCnt << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}